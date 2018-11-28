#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    string fruit = "Apple";
    int len = fruit.length();

    cout << "length of " << fruit << " is: " << len << endl;

    int pos= fruit.find('l'); // give me the index of the first l

    cout << pos << endl;

    // make a smaller string out of a bigger string
    // starting at index 1 of fruit ('p'), extract a
    // length 3 string from there ("ppl")
    string part= fruit.substr(1,3); 

    cout << part << endl;

    fruit.erase(2,3);

    cout << fruit << endl;

    fruit.insert(2,"ricot");

    cout << fruit << endl;

    fruit.replace(2,5,"ple");

    cout << fruit << endl;

    
    // Check out cctype for checks and conversions on characters
    fruit[0]= tolower(fruit[0]);

    cout << fruit << endl;

    cout << isalpha(fruit[0]) << endl;
    cout << isalnum(fruit[0]) << endl;




    string s1 = "Mark";
    string s2 = "Jill";
    for (int i = 0; i <= s1.length(); i++)
         s2[i] = s1[i];
    if (s1 == s2) s1 = "Art";
    cout<<s1<<" "<<s2<<endl;

    string s3 = "dcba";

    sort(s3.begin(), s3.end());

    cout << s3 << endl;

    return 0;
}