#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    char s[] = "blah"; // this is implicitly a C string
    char t1[] = {'a', 'b', 'c', 'd'}; // THIS IS NOT A C STRING
    char t2[] = {'a', 'b', 'c', 'd', '\0'}; // THIS IS A C STRING

    cout << strlen(s) << endl;

    char s1[] = "Mark";
    char s2[] = "Jill";
    for (int i = 0; i <= 4; i++)
         s2[i] = s1[i];
    if (s1 == s2) { // always false (it's just pointer comparison)
        // s1 = "Art"; // you can't redefine c strings like this
        s1[0] = 'A';
        s1[1] = 'r';
        s1[2] = 't';
        s1[3] = '\0';
    }
    cout<<s1<<" "<<s2<<endl;


    return 0;
}