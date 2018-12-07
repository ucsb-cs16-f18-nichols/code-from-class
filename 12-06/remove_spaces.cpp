#include <iostream>
#include <cctype>
using namespace std;

string remove_spaces(const string &s) {
    string result = "";

    // don't include any spaces
    for (int i = 0; i < s.length(); i++) {
        if (!isspace(s[i])) result = result + s[i];
        // otherwise don't include the s[i] character
    }

    return result;
}

int main(int argc, char *argv[])
{
    cout << remove_spaces("The quick brown fox") << endl;


    return 0;
}