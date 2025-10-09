/*
Problem: Reverse a String
Description:
Read a string from the user and reverse it in-place without using any library functions.

Example:
Input:
Hello World

Output:
dlroW olleH

Explanation:
- `reverseString()` swaps characters from start and end, moving towards the center.
- The string is modified in-place without using extra space.

Time Complexity: O(n)
Space Complexity: O(1)
Tags: String, Reverse, Functions, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input string from the user.
2. Call `reverseString()`:
   - Initialize start index s = 0 and end index e = str.length() - 1
   - Swap str[s] and str[e] while s < e
   - Increment s and decrement e after each swap
3. Print the reversed string.
*/

#include <iostream>
#include <string>
using namespace std;

// ✅ Function to reverse a string in-place
void reverseString(string &str) {
    int s = 0;
    int e = str.length() - 1;

    while (s < e) {
        // Swap characters at start and end
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;

        s++;
        e--;
    }
}

int main() {
    string str;

    // ✅ Input: string from user
    cout << "Enter string: ";
    getline(cin, str);

    // ✅ Reverse the string
    reverseString(str);

    // ✅ Output: print reversed string
    cout << "Reversed string: " << str << endl;

    return 0; // ✅ Successful program termination
}
