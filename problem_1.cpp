#include <iostream>

using namespace std;

int main() {
    int hours;

    cout << "Enter the hours: ";
    cin >> hours;

    if (hours >= 0 && hours < 24) {
        if (hours < 12) {
            cout << "AM";
        } else {
            cout << "PM";
        }
    } else {
        cout << "Please enter a number between 0 and 23!!!";
    }

    return 0;
}
