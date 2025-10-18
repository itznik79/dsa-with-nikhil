/*
Problem: Find Duplicate in an Array
Description:
Given an array of integers where one number may appear more than once,
find and print the first duplicate element.  
If no duplicate exists, display an appropriate message.

Example:
Input:
n = 6
Array elements: 1 3 4 2 5 3

Output:
Duplicate number: 3

Explanation:
- The number 3 appears more than once in the array.
- The program uses nested loops to check every pair of elements.

Time Complexity: O(n²) — due to nested loops
Space Complexity: O(1)
Tags: Array, Brute Force, Duplicate Detection, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' → the number of elements in the array.
2. Read array elements using `inputArray()`.
3. In `findDuplicate()`:
   - Use nested loops to compare each element with every other element.
   - If any two elements are equal, return that element as the duplicate.
4. In `displayResult()`:
   - If a duplicate is found → print it.
   - Otherwise → print “No duplicate found.”
*/

#include <iostream>
using namespace std;

// ✅ Function to take input for array
void inputArray(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

int findDuplicate(int arr[], int n) {
    // Compare each pair of elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i]; // duplicate found
            }
        }
    }
    return -1; // no duplicate found
}

void displayResult(int duplicate) {
    if (duplicate == -1)
        cout << "No duplicate found." << endl;
    else
        cout << "Duplicate number: " << duplicate << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if (n <= 1) {
        cout << "Array must have at least 2 elements to find duplicates." << endl;
        return 1;
    }

    int arr[n];
    inputArray(arr, n);
    int duplicate = findDuplicate(arr, n);
    displayResult(duplicate);

    return 0;
}
