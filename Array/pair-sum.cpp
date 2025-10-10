/*
Problem: Find All Pairs with a Given Sum in an Array
Description:
Given an array of integers and a target sum, find all unique pairs of elements
whose sum equals the given target. Each pair should be printed once.

Example:
Input:
Array = {8, 7, 2, 5, 3, 1}
Target = 10

Output:
Pair found: (8, 2)
Pair found: (7, 3)

Explanation:
- (8, 2) = 10
- (7, 3) = 10

If no such pairs exist, print “No pair found.”

Time Complexity: O(n²) — because of the nested loop
Space Complexity: O(1)
Tags: Array, Pair Sum, Two Loops, DSA Basics, C++
Author: Nikhil Gautam

Approach:
1. Traverse the array using two nested loops:
   - Outer loop selects one element at a time.
   - Inner loop checks all other elements after it.
2. For each pair (arr[i], arr[j]), check if their sum equals the target.
3. If yes → print the pair and mark `found = true`.
4. After both loops, if no pair was found, print “No pair found.”
*/

#include <iostream>
using namespace std;

// ✅ Function to find and print all pairs that sum to the target value
void pairSum(int arr[], int n, int target) {
    bool found = false; // flag to track if any valid pair exists

    // Traverse all possible pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the current pair sums to the target
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
                found = true;
            }
        }
    }

    // If no pair was found
    if (!found)
        cout << "No pair found.\n";
}

int main() {
    // ✅ Example array and target value
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    // ✅ Function call
    pairSum(arr, n, target);

    return 0; // ✅ Successful program termination
}
