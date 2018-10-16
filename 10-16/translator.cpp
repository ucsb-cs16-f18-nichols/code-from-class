#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cctype> // for isspace
using namespace std;

string translate(string s);

int main(int argc, char* argv[])
{
    ifstream ifs;

    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " file\n";
        exit(1);
    }

    // Open a file for reading
    ifs.open(argv[1]);

    // open will fail if file does not exist
    if(!ifs) {
        cerr << "Open failed" <<endl;
        return 0;
    }

    string word;
    // the "ifs >> word" syntax sets word
    // and also evaluates to false if we read past
    // the end of the file
    while (ifs >> word) {
        // we successfully got a word
        string translation = translate(word);
        cout << translation;

        // (ifs >> word) skips over whitespace
        // we want to output the same whitespace,
        // so we'll do that manually after every word with
        // ifs.peek() and ifs.get()
        while (isspace(ifs.peek())) {
            // eat up the characters from ifs
            // until we see something that isn't whitespace

            // get the character that we peeked at
            // (extracting it from ifs)
            char next_character = ifs.get();
            // and print it back out to the screen.
            // this preserves the same spacing as the
            // original input file
            cout << next_character;
        }
    }

    // Close the file
    ifs.close();
    return 0;
}

string translate(string s) {
    if (s == "snow") {
        return "nieve";
    } else if (s == "mountain") {
        return "山";
    } else if (s == "wind") {
        return "חור";
    }

    return s;
}