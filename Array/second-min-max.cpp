/*
Problem: Find Second Maximum and Second Minimum in an Array
Description:
Read an array of integers from the user and find the second maximum and second minimum 
elements using separate functions.

Example:
Input:
n = 5
Array elements: 10 5 20 7 15

Output:
Second Max is: 15
Second Min is: 7

Explanation:
- `takeInput()` function reads n elements into the array
- `findSecondMax()` finds the second largest element by keeping track of max and secondMax
- `findSecondMin()` finds the second smallest element by keeping track of min and secondMin
- Functions help keep code modular and reusable

Time Complexity: O(n) for both second max and second min
Space Complexity: O(n)
Tags: Array, Functions, Second Maximum, Second Minimum, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Call `takeInput()` to read array elements from the user.
4. Call `findSecondMax()`:
   - Initialize `max` and `secondMax` with INT_MIN
   - Loop through array:
       - If current element > max: update secondMax = max, max = current element
       - Else if current element > secondMax and not equal to max: update secondMax
5. Call `findSecondMin()`:
   - Initialize `min` and `secondMin` with INT_MAX
   - Loop through array:
       - If current element < min: update secondMin = min, min = current element
       - Else if current element < secondMin and not equal to min: update secondMin
6. Print the results
*/

#include <iostream>
#include <climits>
using namespace std;

// ✅ Function to take input for array
void takeInput(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

// ✅ Function to find second maximum element
int findSecondMax(int arr[], int n) {
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

// ✅ Function to find second minimum element
int findSecondMin(int arr[], int n) {
    int min = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    return secondMin;
}

int main() {
    int n;
    
    // ✅ Input: size of array
    cout << "Enter size of array: ";
    cin >> n;

    // ✅ Input validation
    if (n <= 1) {
        cout << "Array must have at least 2 elements to find second max/min." << endl;
        return 1;
    }

    int arr[n];

    // ✅ Take array input
    takeInput(arr, n);

    // ✅ Find second maximum and second minimum
    int secondMax = findSecondMax(arr, n);
    int secondMin = findSecondMin(arr, n);

    // ✅ Display results
    cout<< "Second Max is: " << secondMax << endl;

    cout << "Second Min is: " << secondMin << endl;

    return 0; // ✅ Successful program termination
}
