ou have been given a non-empty grid ‘mat’ with 'n' rows and 'm' columns consisting of only 0s and 1s.
If two rows have the same number of ones, consider the one with a smaller index. If there's no row with at least 1 zero, return -1.

Input Format:
 n = 3, m = 3, 
mat[] = 
1 1 1
0 0 1
0 0 0
Result:
 0
Explanation:
 The row with the maximum number of ones is 0 (0 - indexed).

Example 2:
Input Format:
 n = 2, m = 2 , 
mat[] = 
0 0
0 0
Result:
 -1
Explanation:
  The matrix does not contain any 1. So, -1 is the answer.