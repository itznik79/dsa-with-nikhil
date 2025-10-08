/*
Problem: Solid Diamond Star Pattern
Description:
Print a diamond-shaped pattern using stars (*) where both the upper and lower
halves are solid. The pattern consists of:
1. Upper half: increasing number of stars per row
2. Lower half: decreasing number of stars per row

Example:
Input:
n = 5

Output:
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 

Explanation:
- Upper half: Row i has i stars
- Lower half: Row i has i stars, decreasing from n-1 down to 1
- Each row uses spaces only between stars for separation

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Diamond Pattern, Star Pattern, Solid Diamond, Pattern Printing, C++, DSA Patterns
Author: Nikhil Gautam

Approach:
1. Take input 'n' for the number of rows in the upper half of the diamond.
2. Loop from i = 1 to n for the upper half:
   a. Print i stars separated by spaces
   b. Move to the next line
3. Loop from i = n-1 down to 1 for the lower half:
   a. Print i stars separated by spaces
   b. Move to the next line
4. The combination of upper and lower halves creates a solid diamond.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows for upper half
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Upper half of diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // ✅ Lower half of diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
