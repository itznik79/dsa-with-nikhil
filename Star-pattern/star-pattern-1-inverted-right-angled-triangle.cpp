/*
Problem: Inverted Right Triangle Star Pattern
Description: Print an inverted right-angled triangle pattern using stars (*) for a given number of rows (n).

Example:
Input:
n = 5

Output:
* * * * *
* * * *
* * *
* *
*

Explanation:
- The first row has n stars.
- Each subsequent row has one star less than the previous.
- Spaces are used for separation and better readability.

Time Complexity: O(n^2)
Space Complexity: O(1)
Tags: Star Pattern, Inverted Triangle, Pattern Printing, C++, DSA Patterns
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // ✅ Validate input
    if (n <= 0) {
        cout << "Error: Number of rows must be a positive integer." << endl;
        return 1; // Exit program if input is invalid
    }
    
    // ✅ Outer loop: controls number of rows
    for (int i = 1; i <= n; i++) {
        
        // ✅ Inner loop: prints stars in each row
        // As i increases, stars decrease (n - i + 1)
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "* ";
        }

        // ✅ Move to next line after printing each row
        cout << endl;
    }

    return 0; // ✅ Successful program termination
}
