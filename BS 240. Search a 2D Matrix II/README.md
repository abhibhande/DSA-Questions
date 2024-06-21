Given a 2D matrix whose elements of each row and each column are sorted in non-decreasing order.
But, the first element of a row is not necessarily greater than the last element of the previous row (if it exists).
You are given an integer ‘target’, and your task is to find if it exists in the given 'mat' or not.

Example 1:
Input Format:
 N = 5, M = 5, target = 14
mat[] = 

Result:
 true
Explanation:
 Target 14 is present in the cell (3, 2)(0-based indexing) of the matrix. So, the answer is true.

Example 2:
Input Format:
 N = 3, M = 3, target = 12,
mat[] = 

Result:
 false
Explanation:
 As target 12 is not present in the matrix, the answer is false.