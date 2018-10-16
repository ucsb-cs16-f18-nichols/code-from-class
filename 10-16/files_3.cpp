//ex01.cpp
//Writing to files
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream ifs;

    // Open a file for writing
    ifs.open("parrot_sketch.txt");
    //open will fail if file does not exist
    // but your program will not crash
    if (!ifs) {
        cerr << "Open failed" << endl;
        return 0;
    }


    int numparrots = 0;
    char response = '\n';

    string line;

    while (response == '\n') {
        getline(ifs, line);//read the next line 
        //and strip the line of the new line character
        if(!ifs)
            break;
        cout << line << endl; //process the line
        // strings have a .find method that will
        // return the index of the string you searched
        // for if it exists, -1 otherwise
        int pos = line.find("parrot");
        // find return the index of the *first*
        // occurrence of the search string in the given string
        cout << pos << endl;
        if (pos >= 0) {// Found the word "parrot" in the line
            numparrots++;
        }
        // given a file or an input stream like cin,
        // ___.get() gets a single character from that input
        response = cin.get();
    }

    cout << "Number of lines that included 'parrot': "
         << numparrots << endl;


    // Close the file
    ifs.close();
    return 0;
}