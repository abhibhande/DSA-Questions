Problem Link : https://www.geeksforgeeks.org/problems/flattening-a-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=flattening-a-linked-list

Given a Linked List, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked lists is in sorted order.
Flatten the Link List so all the nodes appear in a single level while maintaining the sorted order.

Note: The flattened list will be printed using the bottom pointer instead of the next pointer. Look at the printList() function in the driver code for more clarity.

Solution :
Time Complexity : O(N * 2M) { N for recursive Function call + 2M for merge sort (assuming that both the list of m size)}
Time Complexity : O(N * 2M) { N for recursive Function call + 2M for merge sort (assuming that both the list of m size)}
Space Complexity : O(N) { Stack Space }

Examples:

Input:

Output:  5-> 7-> 8- > 10 -> 19-> 20-> 22-> 28-> 30-> 35-> 40-> 45-> 50.
Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
Input:
 
Output: 5-> 7-> 8-> 10-> 19-> 22-> 28-> 30-> 50
Explanation: The resultant linked lists has every node in a single level.(Note: | represents the bottom pointer.)
Note: In the output section of the above examples, the -> represents the bottom pointer.

Expected Time Complexity: O(n * n * m)
Expected Auxiliary Space: O(n)