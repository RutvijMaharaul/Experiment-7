#include <iostream>
using namespace std;

int main() {
    int n, search;
    cout << "Welcome to the Mark Finder Program\n\n";

    cout << "Enter the number of subjects: ";
    cin >> n;

    int marks[n]; // Note: Variable Length Arrays (VLA) are not standard C++, but often supported as an extension. A better practice in standard C++ would be to use a vector or dynamic allocation.

    cout << "\nEnter the marks for each subject:\n";
    for (int i = 0; i < n; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "\n\nEnter the mark you want to search for: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (marks[i] == search) {
            cout << "\nThe mark " << search << " was found at subject " << i + 1 << ".\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nThe mark " << search << " was not found in the list.\n";
    }

    return 0;
}
