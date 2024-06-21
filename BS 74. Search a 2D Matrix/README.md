***For solving this i think that there can be two method
1. Brute Force Solution
    It will require Time Complexity : O(m*n)
                    Space Complexity : O(1)
2. Binary Search Two Times
    It will require Time Complexity : O(log(m) + log(n));
                    Space Complexity : O(1)

3. Optimal By using formula to calculate the row  and column by falttining the 2D matrix
            m - col
            int row=mid/m;
            int col=mid%m;

You have given a 2D matrix it is sorted and you have to search in that matrix

If it is present in the matrix then return True otherwise False

Example 1:
Input Format:
 N = 3, M = 4, target = 8,
mat[] = 
1 2 3 4
5 6 7 8 
9 10 11 12
Result:
 true
Explanation:
 The ‘target’  = 8 exists in the 'mat' at index (1, 3).