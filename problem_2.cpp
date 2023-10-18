#include <iostream>

using namespace std;

int main() {
    int userInput;

    cout << "Enter an integer: ";
    cin >> userInput;

    if (userInput % 2 != 0) {
        userInput += 1;
        cout << userInput;
    } else{
        cout << "Even";
    }

    return 0;
}
