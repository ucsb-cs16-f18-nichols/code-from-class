// example usage: ./etch-a-sketch directions.txt 1 1

#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <chrono>
#include <thread>
#include <fstream>
using namespace std;

void wait(double seconds);
int get_terminal_rows();
int get_terminal_cols();
void move_cursor(int row, int col);
void draw_char(char c);

struct Point {
    int col;
    int row;
};

void write_char_at(char c, Point &p) {
    move_cursor(p.row, p.col);
    draw_char(c);
    move_cursor(get_terminal_rows(), get_terminal_cols());
}

void draw_star(Point &p) {
    write_char_at('*', p);
}

void move_down(Point *p) {
    // need to increment rows here
    p->row = p->row + 1;
    // watch out if we went past the # of rows of the terminal
    if (p->row > get_terminal_rows()) {
        p->row = 1;
    }
}

void move_up(Point *p) {
    // need to increment rows here
    p->row = p->row - 1;
    if (p->row <= 0) {
        p->row = get_terminal_rows();
    }
}

void move_left(Point *p) {
    // need to increment rows here
    p->col = p->col - 1;
    if (p->col <= 0) {
        p->col = get_terminal_cols();
    }
}

void move_right(Point *p) {
    // need to increment rows here
    p->col = p->col + 1;
    if (p->col > get_terminal_cols()) {
        p->col = 1;
    }
}

int main(int argc, char const *argv[])
{
    if (argc != 4) {
        cerr << "usage: " << argv[0] << " directions start_row start_col" << endl;
        exit(1);
    }

    // start the cursor in the top left of the screen
    // read a file containing lines that say left/right/down/up
    // add a star in the proper direction

    for (int i = 0; i < get_terminal_rows(); i++) {
        cout << endl;
    }

    // let's let the user decide where to start the point

    int user_supplied_row = atoi(argv[2]);
    int user_supplied_col = atoi(argv[3]);

    Point p = {user_supplied_col, user_supplied_row};

    // let's read the file for directions now
    ifstream ifs;
    ifs.open(argv[1]);

    // draw the first star
    draw_star(p);
    wait(1.0);

    // go line by line
    string line;
    while (1) {
        getline(ifs, line);
        // check for !ifs immediately after reading from ifs
        // otherwise, line will be the old value and you'd think
        // you had an extra line in your file
        if(!ifs) 
            break;

        // process the line

        // move the point
        if (line == "down") move_down(&p);
        else if (line == "up")  move_up(&p);
        else if (line == "left")  move_left(&p);
        else move_right(&p);

        // redraw the point at its new location
        draw_star(p);
        wait(1.0); // wait a second before we process the next line
    }

    wait(5);

    ifs.close();
    return 0;
}


// don't worry about this stuff down here

int get_terminal_rows() {
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    return size.ws_row;
}

int get_terminal_cols() {
    struct winsize size;
    ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
    return size.ws_col;
}

void move_cursor(int row, int col) {
    cout << "\033[" << row << ";" << col << "H";
    cout.flush();
}
void draw_char(char c) {
    cout << c;
    cout.flush();
}
void wait(double seconds) {
    std::this_thread::sleep_for(std::chrono::microseconds(static_cast<int>(1e6 * seconds)));
}