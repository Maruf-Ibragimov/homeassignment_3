#include <iostream>

using namespace std;

int main() {
    int first_n, second_n;

    cout << "Enter the first number: ";
    cin >> first_n;

    cout << "Enter the second number: ";
    cin >> second_n;

    switch (first_n == second_n) {
        case true:
            cout << "Equal";
            break;
        case false:
            switch (first_n > second_n) {
                case true:
                    cout << first_n;
                    break;
                case false:
                    cout << second_n;
                    break;
            }
            break;
    }

    return 0;
}
