#include <iostream>
using namespace std;

int main() {

int arr[] = {5, 10, 15, 20, 25);
int size = sizeof(arr) / sizeof(arr[0]);
int key;
bool found = false;

cout << "Enter number to search: ":
  cin >> key;

for (int i = 0; i < size; i++) {
if (arr[i] == key) {
    cout << "Number found at index "

<< i << endl;
    found = true;

    }

}

if (!found) {

cout << "Number not found in the array."
<<endl;

}

return 0;
}
