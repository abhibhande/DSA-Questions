Problem Link : https://leetcode.com/problems/delete-node-in-a-linked-list/description/

We have to delete a node where only the node is given which has to be deleted. and node is not the Last node.

So to solve this we have to copy the next value to the previous one until next->next == NULL and then pre->next = NULL;


Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.