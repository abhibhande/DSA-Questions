/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        //Bubble Sort
        ListNode* temp=head;

        while(temp!=NULL)
        {
            ListNode* pre=temp;
            ListNode* next=temp->next;
            while(next != NULL)
            {
                if(pre->val > next->val)
                    swap(pre->val,next->val);
                next=next->next;
            }
            temp=temp->next;
        }
        return head;
    }
};