/*
Problem: Diamond Star Pattern
Description:
Print a symmetrical diamond pattern using stars (*). The pattern consists of:
1. Top half: inverted pyramid
2. Bottom half: upright pyramid
- The diamond is centered using leading spaces.

Example:
Input:
n = 4

Output:
*******
 *****
  ***
   *
  ***
 *****
*******

Explanation:
- Top half: Row i → decreasing number of stars (2*i -1), increasing leading spaces
- Bottom half: Row i → increasing number of stars (2*i -1), decreasing leading spaces
- Leading spaces center-align the pattern to form a diamond.

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Diamond Pattern, Star Pattern, Pattern Printing, C++, DSA Patterns
    
Approach:
1. Take input 'n' as half the number of rows of the diamond.
2. Loop from i = n down to 1 for the top inverted pyramid:
   a. Print (n - i) leading spaces
   b. Print (2*i - 1) stars
   c. Move to the next line
3. Loop from i = 2 to n for the bottom upright pyramid:
   a. Print (n - i) leading spaces
   b. Print (2*i - 1) stars
   c. Move to the next line
4. The combination of top and bottom halves forms the full diamond.
*/

#include <iostream>
using namespace std;

int main() {
    int n;

    // ✅ Input: number of rows for half the diamond
    cout << "Enter the number of rows for half of the pattern: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1;
    }

    // ✅ Top inverted pyramid
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Stars
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }

    // ✅ Bottom upright pyramid
    for (int i = 2; i <= n; i++) {
        // Leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // Stars
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << "*";
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
