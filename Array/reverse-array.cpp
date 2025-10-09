/*
Problem: Reverse an Array using Functions
Description:
Read an array of integers from the user and reverse it using a separate function. 
The reversed array is then printed.

Example:
Input:
n = 5
Array elements: 1 2 3 4 5

Output:
5 4 3 2 1

Explanation:
- `takeInput()` reads n elements into the array.
- `reverseArray()` swaps elements from start and end until the middle.
- `printArray()` prints the array elements in order.
- Functions make the code modular and reusable.

Time Complexity: O(n)
Space Complexity: O(1)
Tags: Array, Functions, Reverse Array, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Call `takeInput()` to read array elements from the user.
4. Call `reverseArray()`:
   - Initialize start index `s = 0` and end index `e = n-1`.
   - Swap arr[s] and arr[e], then increment s and decrement e.
   - Continue until s >= e.
5. Call `printArray()` to display the reversed array.
*/

#include <iostream>
using namespace std;

// ✅ Function to take input for array
void takeInput(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

// ✅ Function to reverse the array
void reverseArray(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

// ✅ Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    // ✅ Input: size of array
    cout << "Enter size of array: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 0) {
        cout << "Array must have at least 1 element to reverse." << endl;
        return 1;
    }

    int arr[n];

    // ✅ Take array input
    takeInput(arr, n);

    // ✅ Reverse the array
    reverseArray(arr, n);

    // ✅ Print the reversed array
    printArray(arr, n);

    return 0; // ✅ Successful program termination
}
