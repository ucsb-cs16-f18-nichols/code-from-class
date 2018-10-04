#include <iostream>
#include <cstdlib> // now I can use atoi and rand!
#include <ctime>
using namespace std;

int main(int argc, char* argv[]) {

    // seed the random # generator
    // so that it starts out with a different
    // number each time the program runs
    srand(time(0));

    int randomNumber = rand() % 101;

    int guess;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high\n";
        } else if (guess < randomNumber) {
            cout << "Too low\n";
        } else {
            // if we got here, the user guessed correctly
            cout << "You got it!\n";
        }
    } while (guess != randomNumber);

    return 0;
}