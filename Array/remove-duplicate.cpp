/*
Problem: Remove Duplicates from an Array
Description:
Given an array of integers, remove all duplicate elements so that each element appears only once.
The program modifies the original array and prints the result.

Example:
Input:
n = 7
Array elements: 1 2 3 2 1 4 5

Output:
Array after removing duplicates: 1 2 3 4 5

Explanation:
- The program checks each element and shifts subsequent elements left if a duplicate is found.
- This ensures all duplicates are removed and only unique elements remain.

Time Complexity: O(n²) — due to nested loops for checking duplicates
Space Complexity: O(1) — in-place modification of the array
Tags: Array, Brute Force, Duplicate Removal, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' → number of elements and read array elements.
2. In `removeDuplicates()`:
   - Compare each element with all subsequent elements.
   - If duplicate found, shift elements to the left and reduce size.
3. In `displayResult()`:
   - Print the array after duplicates are removed.
*/

#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void removeDuplicates(int arr[], int &n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements left to overwrite duplicate
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;      // Reduce array size
                j--;      // Check the same index again
            }
        }
    }
}

void displayResult(int arr[], int n) {
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 1) {
        cout << "Array must have at least 2 elements." << endl;
        return 1;
    }
    int arr[n];
    inputArray(arr, n);
    removeDuplicates(arr, n);
    displayResult(arr, n);
    return 0;
}