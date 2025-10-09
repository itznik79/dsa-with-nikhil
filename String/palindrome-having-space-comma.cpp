/*
Problem: Check if a String is a Palindrome (Ignoring Non-Letter Characters)
Description:
Read a string from the user and check if it is a palindrome. 
The check is case-insensitive and ignores non-letter characters (like spaces, punctuation).

Example:
Input:
"A man, a plan, a canal: Panama"

Output:
Palindrome

Explanation:
- `toLowerCase()` converts all uppercase letters to lowercase to make comparison case-insensitive.
- `isLetter()` checks if a character is a lowercase letter.
- `checkPalindrome()` compares letters from start and end, skipping non-letter characters.
- Returns true if all corresponding letters match, false otherwise.

Time Complexity: O(n)
Space Complexity: O(1)
Tags: String, Functions, Palindrome Check, Ignore Non-Letter, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input string from the user.
2. Call `toLowerCase()` to convert string to lowercase.
3. Call `checkPalindrome()`:
   - Initialize two pointers: `s = 0` and `e = str.length()-1`.
   - While s < e:
       - Skip characters that are not letters using `isLetter()`.
       - Compare str[s] and str[e]:
           - If not equal, return false.
           - Else, increment s and decrement e.
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

// ✅ Function to check if a character is a lowercase letter
bool isLetter(char c) {
    return (c >= 'a' && c <= 'z');
}

// ✅ Function to check if string is a palindrome ignoring non-letter characters
bool checkPalindrome(string str) {
    toLowerCase(str); // Convert to lowercase

    int s = 0;
    int e = str.length() - 1;

    while (s < e) {
        // Skip non-letter characters from start
        if (!isLetter(str[s])) { s++; continue; }

        // Skip non-letter characters from end
        if (!isLetter(str[e])) { e--; continue; }

        // Compare letters
        if (str[s] != str[e]) return false;

        s++;
        e--;
    }

    return true; // ✅ All letters matched
}

int main() {
    string str;

    // ✅ Input: string from user
    cout << "Enter string: ";
    getline(cin, str);

    // ✅ Check palindrome and display result
    if (checkPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;

    return 0; // ✅ Successful program termination
}
