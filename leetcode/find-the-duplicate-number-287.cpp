// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left = 1, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = 0;
            for (int num : nums) {
                if (num <= mid) count++;
            }
            if (count > mid) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};
// This code implements a binary search approach to find the duplicate number in an array.
// It counts how many numbers are less than or equal to the midpoint and adjusts the search range
// based on whether the count exceeds the midpoint, ultimately converging on the duplicate number.
// The time complexity is O(n log n) and the space complexity is O(1).
// The input array is assumed to contain n integers where each integer is in the range [1, n] and there is exactly one duplicate.
// The solution uses a binary search strategy to efficiently find the duplicate number in O(n log n) time complexity.
// The input is a vector of integers, and the output is the duplicate integer found in the array.