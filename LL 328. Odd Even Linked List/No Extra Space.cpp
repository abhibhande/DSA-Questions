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
    ListNode* insert(ListNode* head,ListNode* t)
    {
        t->next=head->next;
        head->next=t;
        return t;
    }

    ListNode* Delete(ListNode* prev,ListNode* next)
    {
        prev->next=next->next;
        next->next=NULL;
        return next;
    }

    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return head;
        ListNode* odd=head;
        ListNode* even=head->next;

        while(even != NULL && even->next != NULL)
        {
            ListNode* next=Delete(even,even->next);
            odd = insert(odd,next);
            even=even->next;
        }

        return head;
    }
};