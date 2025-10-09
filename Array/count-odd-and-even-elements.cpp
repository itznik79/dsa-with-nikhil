/*
Problem: Count Even and Odd Numbers in an Array
Description:
Read an array of integers from the user and count how many numbers are even and how many are odd using separate functions.

Example:
Input:
n = 5
Array elements: 1 2 3 4 5

Output:
Even: 2, Odd: 3

Explanation:
- `takeInput()` function reads n elements into the array
- `countEvenAndOdd()` function counts the number of even and odd elements using reference variables
- This approach demonstrates modular programming using functions

Time Complexity: O(n)
Space Complexity: O(n)
Tags: Array, Even Odd Count, Functions, C++, DSA Basics
Author: Nikhil Gautam

Approach:
1. Take input 'n' as the size of the array.
2. Create an array of size n.
3. Call `takeInput()` to read array elements from the user.
4. Call `countEvenAndOdd()` to calculate counts of even and odd elements.
5. Print the counts of even and odd numbers.
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

// ✅ Function to count even and odd elements in an array
void countEvenAndOdd(int arr[], int n, int &even, int &odd) {
    even = 0;
    odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
}

int main() {
    int n, even, odd;

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

    // ✅ Count even and odd numbers
    countEvenAndOdd(arr, n, even, odd);

    // ✅ Print the results
    cout << "Even: " << even << ", Odd: " << odd << endl;

    return 0; // ✅ Successful program termination
}
