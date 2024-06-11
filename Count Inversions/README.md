For solving this there are two solution 
1. Brute Force Solution
    Time Complexity - O(n * n)
    Space Complexity - O(1)

2. Optimal Using Merge sort and rest is same just addition of one line of code;
    Time complexity : O(NLogN) - Because there we are only using the merge sort it self not anything else
    Space complexity - O (N) - ae we are creating temporary array everttime while sorting the array


Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).

