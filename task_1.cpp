
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt user for input
   cout << "Enter an integer value: ";
   cin >> *dynamicInt;

   cout << "Enter a string value: ";
   cin.ignore(); // Ignore newline character
   getline(cin, *dynamicString);

    // Output values
   cout << "Dynamic integer value: " << *dynamicInt << endl;
   cout << "Dynamic string value: " << *dynamicString << endl;

    // Deallocate memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}
    