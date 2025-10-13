/*
Problem: Maximum Subarray Sum (Kadane's Algorithm)
Description:
Given an array of integers, find the contiguous subarray (containing at least one number)
which has the largest sum and return its sum.

Example:
Input:
n = 6
Array elements: -2 1 -3 4 -1 2

Output:
Maximum subarray sum is: 5

Explanation:
- The subarray [4, -1, 2] has the largest sum = 5.
- The program uses Kadane's Algorithm: iteratively find the maximum sum ending at each position.

Time Complexity: O(n) — single pass through the array
Space Complexity: O(1) — constant extra space
Tags: Array, Kadane's Algorithm, Maximum Subarray, C++, DSA
Author: Nikhil Gautam

Approach:
1. Take input 'n' → the number of elements.
2. Read array elements into a vector.
3. In `maxSubArray()`:
   - Initialize `sum` and `maxi` to first element.
   - Loop through the array:
       * Update `sum` = max(current element, sum + current element)
       * Update `maxi` = max(maxi, sum)
   - Return `maxi` as maximum subarray sum.
4. In `displayResult()`:
   - Print the maximum subarray sum.
*/

#include <iostream>
#include <vector>
using namespace std;

// ✅ Function to find maximum subarray sum using Kadane's Algorithm
int maxSubArray(const vector<int>& nums) {
    int sum = nums[0];    // current subarray sum
    int maxi = nums[0];   // maximum sum found so far

    for (int i = 1; i < nums.size(); i++) {
        sum = max(nums[i], sum + nums[i]); // start new subarray or extend current
        maxi = max(maxi, sum);            // update max sum
    }

    return maxi;
}

// ✅ Function to display the result
void displayResult(int maxSum) {
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main() {
    int n;

    // ✅ Input: number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array must have at least 1 element." << endl;
        return 1;
    }

    vector<int> nums(n);

    // ✅ Input: array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    // ✅ Step 1: Find maximum subarray sum
    int maxSum = maxSubArray(nums);

    // ✅ Step 2: Display result
    displayResult(maxSum);

    return 0; // ✅ Successful program termination
}
