#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' ||
           c == 'o' || c == 'u';
}

int countVowels(string s) {
    // base case: string is empty
    if (s == "") {
        return 0;
    } else {
        // recursively count the vowels in the smaller string
        int smaller_result = countVowels(s.substr(1));
        // build up the bigger result
        // +1 if the first character of this bigger
        // string was a vowel
        if (isVowel(s[0])) return smaller_result + 1;
        else return smaller_result;
    }
}

int countVowels2(string s) {
    // base case: string is empty
    int result = 0;

    if (s != "") {
        result = countVowels(s.substr(1));
        if (isVowel(s[0])) result++;
    }

    return result;
}


int main(int argc, char *argv[])
{
    assert(countVowels("widget") == 2);
    assert(countVowels("") == 0);
    assert(countVowels("rhythm") == 0);
    assert(countVowels("WIDGET") == 2);

    assert(countVowels2("widget") == 2);
    assert(countVowels2("") == 0);
    assert(countVowels2("rhythm") == 0);
    assert(countVowels2("WIDGET") == 2);

    return 0;
}