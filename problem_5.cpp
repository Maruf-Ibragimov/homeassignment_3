#include <iostream>

using namespace std;

int main() {
    int userInput;

    cout << "Please enter a number: ";
    cin >> userInput;

    switch ((userInput % 3 == 0) && (userInput % 4 == 0))
    {
    case true:
        cout << "Yes";
        break;
    case false:
        cout << "No";
        break;  
    }

    return 0;
}