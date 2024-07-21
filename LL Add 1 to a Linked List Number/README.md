Problem Link : https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=add-1-to-a-number-represented-as-linked-list

A number is represented in the Linked List such that each digit corresponds to a node in the linked list. You need to add 1 to it. Returns the head of the modified linked list. 

Note: The head represents the leftmost digit of the number.

Solution 1: By using the recursion
Time Complexity : O(N)
Space Complexity : O(1)

Examples :

Input: LinkedList: 4->5->6
Output: 457
Explanation: 4->5->6 represents 456 and when 1 is added it becomes 457. 
Input: LinkedList: 1->2->3
Output: 124 
Explanation:  1->2->3 represents 123 and when 1 is added it becomes 124. 
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).