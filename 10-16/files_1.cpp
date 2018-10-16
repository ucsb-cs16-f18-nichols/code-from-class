//Writing to files
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream ofs;
    // Open a file for writing
    ofs.open("animals.txt");

    // by default, ofstreams *overwrite* the file

    // Write to it
    ofs << "Duck\nCow\nGoat\nParrot\n";

    // Close the file
    ofs.close();
    return 0;
}