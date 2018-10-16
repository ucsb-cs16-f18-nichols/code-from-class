// Reading from files
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ifstream ifs;

    // Open a file for reading
    ifs.open("animals.txt");

    // open will fail if file does not exist
    if (!ifs) {
        cerr << "Open failed" <<endl;
        return 0;
    }

    string line;

    while (1) {
        getline(ifs, line);
        if(!ifs)
            break;
        cout << line << endl; //process the line
    }

    // Close the file
    ifs.close();
    return 0;
}