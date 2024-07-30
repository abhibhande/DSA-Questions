Description
Problem Statement

You are given an array of integers. You need to transform this array into a sequence where each element of arr[i] is transformed to the maximum element in the array that is less than arr[i]. If no such element exists, arr[i] remains unchanged. Your task is to perform this transformation and return the transformed array.

Input Format

The first line contains an integer n representing the number of elements in the array.
The following n lines contain integers representing the elements of the array.
Constraints

1 <= n <= 105
-105 <= arr[i] <= 105
Output Format

Return the transformed array after performing the sequence transformation as described
Evaluation Parameters

Sample Input

5
3 
5 
2 
8 
6
Sample Output

2
3
2
6
5
Explanation

In the array [3, 5, 2, 8, 6]

Element 3: The maximum element less than 3 is 2.
Element 5: The maximum element less than 5 is 3.
Element 2: No element is less than 2, so it remains unchanged.
Element 8: The maximum element less than 8 is 6.
Element 6: The maximum element less than 6 is 5.
Therefore, the transformed array is [2, 3, 2, 6, 5].

