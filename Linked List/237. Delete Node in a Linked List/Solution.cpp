/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* pre=node;
        ListNode* next=node->next;
        pre->val=next->val;

        while(next->next != NULL)
        {
            pre=next;
            next=pre->next;
            pre->val=next->val;
        }
        pre->next=NULL;

    }
};