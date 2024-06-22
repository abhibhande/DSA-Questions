To solve this there can be three solutions
1. Brute Force - by finding every subarray and counting the odd numbers
    Time Complexity : O(N * N)
    Space Complexity : O(1)

2. Hash map - which store the no of occurences of count
    Time Complexity : O(N * log(N)) {Because hash requires the log(N) time to store the element}
    Space Complexity : O(N) { To store the element}

3. Two Pointers Approach( Sliding window )
    Time Complexity : O(2 N) {Because we are traversing the array i + j time}
    Space Complexity : O(1)


We have given an array in which we have to find the subarray which contain only the k odd numbers.


Example 1:

Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:

Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There are no odd numbers in the array.
Example 3:

Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16