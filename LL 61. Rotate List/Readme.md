Given the head of a linked list, rotate the list to the right by k places.

Solution 1 : Adding Every last element to start while (k>0) (Image Attached)
    Time Complexity : O(k * N)
    Space Complexity : O(1)

Solution 2 : Finding (N-k)th element then add to first
    Time Complexity : O(N + N) { Searching length of list + Finding Kth Element}
    Space Complexity : O(1)

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Example 2:


Input: head = [0,1,2], k = 4
Output: [2,0,1]