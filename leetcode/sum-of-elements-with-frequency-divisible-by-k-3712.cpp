class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> freq(101, 0);

        for (int num : nums) {
            freq[num]++;
        }

        int sum = 0;

        for (int i = 1; i <= 100; i++) {
            if (freq[i] != 0 && freq[i] % k == 0) {
                sum += i * freq[i];
            }
        }

        return sum;
    }
};

// This code defines a function `sumDivisibleByK` that calculates the sum of elements in the input vector `nums`
// whose frequency is divisible by `k`. It uses a frequency array to count occurrences of each number from 1 to 100.
// The function iterates through the frequency array, checking if the frequency of each number is non
//-zero and divisible by `k`. If so, it adds the product of the number and its frequency to the sum.
// The time complexity is O(n + m), where n is the size of `nums` and m is the range of numbers (1 to 100).
// The space complexity is O(m) due to the frequency array. The function returns the calculated sum as an integer.
// The input is a vector of integers `nums` and an integer `k`, and the output is an integer representing the sum of elements with frequencies divisible by `k`.
// The function does not modify the input vector and only reads from it to compute the result.  