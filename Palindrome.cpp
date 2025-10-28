#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr = "";

    cout << "Please enter a word or phrase: ";
    cin >> str;

    // Loop to reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    // Check if the original string equals the reversed string
    if (str == reversedStr) {
        cout << "Yes! This is a palindrome." << endl;
    } else {
        cout << "No, this is not a palindrome." << endl;
    }

    cout << "Thank you for using the palindrome checker." << endl;

    return 0;
}
