// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

// Example 1:

// Input: arr = [1,0,2,3,0,4,5,0]
// Output: [1,0,0,2,3,0,0,4]
// Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
// Example 2:

// Input: arr = [1,2,3]
// Output: [1,2,3]
// Explanation: After calling your function, the input array is modified to: [1,2,3]

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                if (i != n-1) {
                    arr.insert(arr.begin() + i + 1, 0);
                    i++; 
                    arr.pop_back();
                }
            }
        }
    }
};

// This code duplicates each occurrence of zero in the input array 'arr' and shifts the remaining elements to the right.
// The function iterates through the array, and when a zero is found, it inserts another
// zero immediately after it, increments the index to skip the newly added zero, and removes the last element to maintain the original array size.
// The time complexity is O(n^2) in the worst case due to the insert operation, and the space complexity is O(1) since it modifies the array in place.
// The input array is assumed to have enough space to accommodate the duplicated zeros without exceeding its original length.
// The solution uses a simple loop to traverse the array and handle zero duplication.
// The input is a vector of integers, and the output is the modified vector with duplicated zeros
// after the function call.
// The function does not return anything as it modifies the input array in place.
