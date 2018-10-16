#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream ifs;
    ifs.open("parrot_sketch.txt");

    if (!ifs) {
        cerr << "open failed" << endl;
    }

    string line;

    while (ifs) {
        getline(ifs, line);
        cout << line << endl;
    }

    ifs.close();

    return 0;
}