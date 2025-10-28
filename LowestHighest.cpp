#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    int marks[n];
    cout << "Enter the marks for each subject:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> marks[i];
    }

    int min = marks[0];
    int max = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < min)
            min = marks[i];
        if (marks[i] > max)
            max = marks[i];
    }

    cout << "\nLowest mark scored: "
         << min << endl;
    cout << "Highest mark scored: "
         << max << endl;

    cout << "\nThanks for using the program.\n";
    
    return 0; // Added return 0 for completeness
}
