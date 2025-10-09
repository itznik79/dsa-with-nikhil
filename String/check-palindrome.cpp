/*
Problem: Check if a String is a Palindrome
Description:
Read a string from the user and check if it is a palindrome. The check is case-insensitive.

Example:
Input:
"Madam"

Output:
Palindrome

Explanation:
- `toLowerCase()` converts all uppercase letters to lowercase to make comparison case-insensitive.
- `checkPalindrome()` compares characters from start and end moving towards the center.
- Returns true if all corresponding characters match, false otherwise.

Time Complexity: O(n)
Space Complexity: O(1)
Tags: String, Functions, Palindrome Check, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input string from the user.
2. Call `toLowerCase()` to convert the string to lowercase.
3. Call `checkPalindrome()`:
   - Initialize two pointers: `s = 0` and `e = str.length()-1`.
   - Compare str[s] and str[e]:
       - If not equal, return false.
       - Else, increment s and decrement e.
   - Repeat until s >= e.
4. Print "Palindrome" if true, otherwise "Not palindrome".
*/

#include <iostream>
#include <string>
using namespace std;

// ✅ Function to convert uppercase letters to lowercase
void toLowerCase(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// ✅ Function to check if a string is a palindrome
bool checkPalindrome(string str) {
    toLowerCase(str);  // Convert to lowercase

    int s = 0;
    int e = str.length() - 1;

    while (s < e) {
        if (str[s] != str[e])
            return false; // Characters do not match
        s++;
        e--;
    }

    return true; // All characters matched
}

int main() {
    string str;

    // ✅ Input: string from user
    cout << "Enter string: ";
    getline(cin, str);

    // ✅ Check palindrome and print result
    if (checkPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;

    return 0; // ✅ Successful program termination
}
