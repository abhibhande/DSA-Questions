Problem Link : https://leetcode.com/problems/odd-even-linked-list/description/

Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Solution 1(Two Pointer Approch):
    Time Complexity : O(N)
    Space Complexity : O(N)

Solution 2(With No Extra Space) (Just Swaping The position of the Nodes)
    Time Complexity : O(N) (N/2)
    Space Complexity : O(1)

Solution 3(Changing the same LL)
    

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
Example 2:


Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]