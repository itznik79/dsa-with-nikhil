class Solution {
public:
    bool isValid(string s) {
    string temp = "";  // acts like a stack

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            temp += c;  // push opening bracket
        } else {
            if (temp.empty()) return false; 
            char top = temp.back();        
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                temp.pop_back();  // pop last bracket
            } else {
                return false;     // mismatch
            }
        }
    }

    return temp.empty();
    }
};
/*
Title: Find Unique Elements in an Array (Brute Force Approach)  
Example:
Input:  
arr = {1, 2, 3, 2, 1, 4, 5} 
Output:  
Unique elements: 3 4 5
Explanation:
- Elements 1 and 2 appear more than once, so they are ignored.
- Elements 3, 4, 5 appear only once, so they are printed.
- The program uses nested loops to check for duplicates.
Time Complexity: O(n²) — due to nested loops
Space Complexity: O(1) — no extra space used
Tags: Array, Brute Force, Unique Elements, C++, DSA Basics
Author: Nikhil Gautam
Approach:
1. Take input array elements.
2. In `printUniqueElements()`:
   - For each element, check the entire array to see if it appears more than once.
   - If it appears only once, print it.
3. In `main()`:
   - Declare and initialize the array.
    - Call `printUniqueElements()` to display unique elements.
*/