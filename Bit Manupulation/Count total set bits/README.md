You are given a number n. Find the total count of set bits for all numbers from 1 to n(both inclusive).

Examples :

Solution 1:
Time Complexity : O(N logn)
Space Complexity : O(1)


Input: n = 4
Output: 5
Explanation: For numbers from 1 to 4. For 1: 0 0 1 = 1 set bits For 2: 0 1 0 = 1 set bits For 3: 0 1 1 = 2 set bits For 4: 1 0 0 = 1 set bits Therefore, the total set bits is 5.
Input: n = 17
Output: 35
Explanation: From numbers 1 to 17(both inclusive), the total number of set bits is 35.