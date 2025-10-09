/*
Problem: Find Maximum and Minimum in an Array
Description:
Read an array of integers from the user and find the maximum and minimum elements using separate functions.

Example:
Input:
n = 5
Array elements: 10 5 20 7 15

Output:
Max is: 20
Min is: 5

Explanation:
- `takeInput()` function reads n elements into the array
- `findMax()` function iterates through the array to find the maximum element
- `findMin()` function iterates through the array to find the minimum element
- Using functions keeps code modular and reusable

Time Complexity: O(n) for both max and min
Space Complexity: O(n)
Tags: Array, Functions, Maximum, Minimum, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Call `takeInput()` to read array elements from the user.
4. Call `findMax()` to find the maximum element in the array.
5. Call `findMin()` to find the minimum element in the array.
6. Print the maximum and minimum elements.
*/

#include <iostream>
#include <climits>
using namespace std;

// ✅ Function to take input for array
void takeInput(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// ✅ Function to find maximum element in array
int findMax(int arr[], int n) {
    int max = arr[0]; // initialize max with first element

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // update max if current element is greater
        }
    }
    return max;
}

// ✅ Function to find minimum element in array
int findMin(int arr[], int n) {
    int min = arr[0]; // initialize min with first element

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // update min if current element is smaller
        }
    }
    return min;
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

    // ✅ Find and print maximum and minimum elements
    cout << "Max is: " << findMax(arr, n) << endl;
    cout << "Min is: " << findMin(arr, n) << endl;

    return 0; // ✅ Successful program termination
}
