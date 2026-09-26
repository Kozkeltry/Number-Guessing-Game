#include <iostream>
#include <string>
#include <random>
using namespace std;

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 20);

    int random_number = distrib(gen);

    int guess = -1;

    while (guess != random_number)
    {
        cout << "Guess the number: ";
        cin >> guess;

        if (guess != random_number) {
            cout << "Didn't guess right!" << endl;
        }
    }
    cout << "Congratulations! You guessed right!" << endl;

    return 0;
}