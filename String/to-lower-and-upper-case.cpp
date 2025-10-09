/*
Problem: Convert String to Lowercase and Uppercase
Description:
Read a string from the user and convert all its characters to lowercase and uppercase.

Example:
Input:
Hello World

Output:
Lowercase: hello world
Uppercase: HELLO WORLD

Explanation:
- `toLowerCase()` converts all uppercase letters to lowercase.
- `toUpperCase()` converts all lowercase letters to uppercase.
- Characters that are not letters remain unchanged.

Time Complexity: O(n)
Space Complexity: O(1)
Tags: String, Functions, Case Conversion, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input string from the user.
2. Call `toLowerCase()` to convert string to lowercase and print it.
3. Call `toUpperCase()` to convert string to uppercase and print it.
*/

#include <iostream>
#include <string>
using namespace std;

// ✅ Function to convert string to lowercase
void toLowerCase(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // ASCII shift
        }
    }
}

// ✅ Function to convert string to uppercase
void toUpperCase(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // ASCII shift
        }
    }
}

int main() {
    string str;

    // ✅ Input: string from user
    cout << "Enter a string: ";
    getline(cin, str);

    // ✅ Convert to lowercase and print
    string lowerStr = str; // create a copy
    toLowerCase(lowerStr);
    cout << "Lowercase: " << lowerStr << endl;

    // ✅ Convert to uppercase and print
    string upperStr = str; // create a copy
    toUpperCase(upperStr);
    cout << "Uppercase: " << upperStr << endl;

    return 0; // ✅ Successful program termination
}
