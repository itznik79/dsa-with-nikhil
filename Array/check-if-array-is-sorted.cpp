/*
Problem: Check If Array is Sorted
Description:
Read an array of integers from the user and check whether the array is sorted in 
non-decreasing order using a separate function.

Example:
Input:
n = 5
Array elements: 1 2 3 4 5

Output:
sorted

Explanation:
- `takeInput()` function reads n elements into the array
- `checkIfArrayIsSorted()` function checks if each element is less than or equal to the next
- If all elements satisfy the condition, array is sorted; otherwise, it is not

Time Complexity: O(n)
Space Complexity: O(n)
Tags: Array, Functions, Check Sorted, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Call `takeInput()` to read array elements from the user.
4. Call `checkIfArrayIsSorted()` to check if the array is sorted:
   - Loop through the array from index 0 to n-2
   - If arr[i] > arr[i+1], return false
   - If loop completes without returning false, return true
5. Print "sorted" if the array is sorted, else print "not sorted"
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

// ✅ Function to check if array is sorted in non-decreasing order
bool checkIfArrayIsSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
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

    // ✅ Check if array is sorted and print result
    if (checkIfArrayIsSorted(arr, n))
        cout << "sorted" << endl;
    else
        cout << "not sorted" << endl;

    return 0; // ✅ Successful program termination
}
