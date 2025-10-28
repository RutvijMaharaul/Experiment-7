#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the Student Marks Recorder! \n\n";

    int n;
    cout << "How many subjects do you have? ";
    cin >> n;

    // Dynamically sized array to store marks
    int marks[n];

    cout << "\nPlease enter your marks below (under 100):\n";

    // Loop to input marks for each subject
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for Subject " << (i + 1) << ": ";
        cin >> marks[i];
    }

    cout << "\nHere are the marks you entered:\n";

    // Loop to display the entered marks
    for (int i = 0; i < n; i++) {
        cout << "Subject " << (i + 1) << ": " << marks[i] << " marks\n";
    }

    cout << "\nThank you for using the Marks Recorder. All the best! \n";

    return 0;
}
