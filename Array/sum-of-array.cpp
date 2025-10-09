/*
Problem: Sum of Array Elements
Description:
Take input of an array of integers and calculate the sum of all its elements.

Example:
Input:
n = 5
Array elements: 1 2 3 4 5

Output:
Sum of array: 15

Explanation:
- Read n elements into an array
- Loop through the array and add each element to a sum variable
- Print the sum at the end

Time Complexity: O(n)
Space Complexity: O(n)
Tags: Array, Sum, C++, DSA Basics, Array Problems
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Take input elements from the user into the array.
4. Loop through the array:
   - Add each element to a sum variable.
5. Print the final sum.
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

// ✅ Function to calculate sum of array elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
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

    // ✅ Calculate and print sum
    cout << "Sum of array: " << sumArray(arr, n) << endl;

    return 0; // ✅ Successful program termination
}
