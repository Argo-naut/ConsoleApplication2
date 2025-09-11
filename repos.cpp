#include <iostream>
#include <limits>  // for numeric_limits
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter an integer: ";
        cin >> number;

        if (cin.fail()) {
            cout << "Invalid input. Please enter an integer.\n";

            // clear error state
            cin.clear();

            // discard invalid input from buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            cout << "You entered: " << number << "\n";
            break; // exit loop
        }
    }

    return 0;
}
