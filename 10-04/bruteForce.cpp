#include <iostream>
#include <cstdlib> // now I can use atoi and rand!
#include <ctime>
using namespace std;

int main(int argc, char* argv[]) {

    for (int horses = 0; horses <= 100; horses++) {
        for (int pigs = 0; pigs <= 100; pigs++) {
            int rabbits = 100 - horses - pigs;

            if (rabbits >= 0) { // make sure we are buying exactly 100 animals
                if (horses * 10.00 + pigs * 3.00 + rabbits * 0.50 == 100.00) {
                    // if we got here,
                    // we bought those 100 animals
                    // for exactly $100.
                    cout << horses << " horses, ";
                    cout << pigs << " pigs, ";
                    cout << rabbits << " rabbits";
                    cout << endl;
                }
            }
        }
    }

    return 0;
}