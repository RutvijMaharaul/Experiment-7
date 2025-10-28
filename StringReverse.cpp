#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr = "";

    cout << "Please enter a word or phrase (no spaces): ";
   cin >> str;

    for (int i = str.length() - 1; i >= 0; i--) {
        // Append characters to build the reversed string
        reversedStr += str[i];
    }

    cout << "The reversed string is: " << reversedStr << endl;

    cout << "Thank you for using the string reverser." << endl;

    return 0;
}
