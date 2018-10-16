#include <iostream>
using namespace std;

// global variables live for the entire program
int harryPotter = 0;

void gobletOfFire() {
    // local variables are destroyed after their enclosing function returns
    int cedricDiggory = 4;

    harryPotter++;
    cedricDiggory++;
}

int main()
{
    gobletOfFire();
    cout << harryPotter << endl;

    return 0;
}