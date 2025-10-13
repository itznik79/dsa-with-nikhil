/*
Problem: Palindrome Number Check
Description:
Given an integer, check whether it is a palindrome or not.
A palindrome number reads the same backward as forward.

Example:
Input:
num = 121

Output:
True, it is a palindrome.

Explanation:
- The number 121 reads the same backward (121) and forward (121).
- Negative numbers are not considered palindromes.
- The program extracts the first and last digits repeatedly and compares them.

Time Complexity: O(log10 n) — we process each digit pair
Space Complexity: O(1) — no extra space used
Tags: Number, Palindrome, C++, DSA Basics
Author: Nikhil Gautam
*/

#include <iostream>
#include <cmath>
using namespace std;

// ✅ Function to check if a number is a palindrome
bool isPalindrome(int num) {
    if (num < 0) return false; // Negative numbers are not palindrome
    
    int digits = (num == 0) ? 1 : (int)log10(num) + 1;
    int first, last, divisor;
    
    while (num > 0) {
        divisor = pow(10, digits - 1);
        first = num / divisor;      // Extract first digit
        last = num % 10;            // Extract last digit
        
        if (first != last)
            return false;           // Not palindrome
        
        // Remove first and last digits
        num = (num % divisor) / 10;
        digits -= 2;
    }
    
    return true;
}

// ✅ Function to display result
void displayResult(bool result) {
    if (result)
        cout << "True, it is a palindrome." << endl;
    else
        cout << "False, not a palindrome." << endl;
}

int main() {
    int num;

    // ✅ Input: number to check
    cout << "Enter a number: ";
    cin >> num;

    // ✅ Step 1: Check palindrome
    bool result = isPalindrome(num);

    // ✅ Step 2: Display result
    displayResult(result);

    return 0; // ✅ Successful program termination
}
