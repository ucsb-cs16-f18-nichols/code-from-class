// Appending to files
#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    ofstream ofs;
    // Open a file for appending
    ofs.open("animals.txt", ios::app);

    // Write to the end this time
    ofs << "Horse\n";
    
    // Close the file
    ofs.close();
    return 0;
}