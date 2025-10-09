/*
Problem: Take Input and Print Array Using Functions
Description:
Read an array of integers from the user and print the array elements using separate functions.

Example:
Input:
n = 5
Array elements: 10 20 30 40 50

Output:
Array elements: 10 20 30 40 50

Explanation:
- `takeInput()` function reads n elements into the array
- `printArray()` function prints all array elements
- Separating logic into functions makes the code modular and reusable

Time Complexity: O(n)
Space Complexity: O(n)
Tags: Array, Functions, Input/Output, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Call `takeInput()` to read array elements from the user.
4. Call `printArray()` to display the array elements.
*/

#include <iostream>
using namespace std;

// ✅ Function to take input for array
void takeInput(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// ✅ Function to print array elements
void printArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // ✅ Input: size of array
    cout << "Enter size of array: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Error: Array size must be positive." << endl;
        return 1;
    }

    int arr[n];

    // ✅ Take array input
    takeInput(arr, n);

    // ✅ Print array
    printArray(arr, n);

    return 0; // ✅ Successful program termination
}
