/*
Problem: Print Unique Elements in an Array
Description:
Given an array of integers, print all elements that appear **exactly once** (unique elements) in the array.

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

#include <iostream>
using namespace std;

void printUniqueElements(int arr[], int n) {
    cout << "Unique elements: ";

    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        // Check if arr[i] appears again in the array
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
            cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUniqueElements(arr, n);

    return 0;
}
