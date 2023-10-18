#include <iostream>

using namespace std;

int main() {
    char inputChar;

    cout << "Enter a character: ";
    cin >> inputChar;

    if ((inputChar >= 'a' && inputChar <= 'z') || (inputChar >= 'A' && inputChar <= 'Z')) {
        switch (tolower(inputChar)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "Vowel.";
                break;
            default:
                cout << "Consonant.";
                break;
        }
    };

    return 0;
}
