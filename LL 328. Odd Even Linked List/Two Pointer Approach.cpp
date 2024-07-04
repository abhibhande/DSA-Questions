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
    ListNode* insert(ListNode* head,int data)
    {
        ListNode* t=new ListNode(data);
        t->next=head->next;
        head->next=t;
        return head->next;
    }

    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL || head->next==NULL)
            return head;

        ListNode* new_head=new ListNode(head->val);
        ListNode* start=new_head;
        ListNode* end=new ListNode(head->next->val);
        start->next=end;

        ListNode* temp=head->next->next;
        while(temp != NULL && temp->next != NULL)
        {
            start=insert(start,temp->val);
            end=insert(end,temp->next->val);
            temp=temp->next->next;
        }
        if(temp!=NULL)
            start=insert(start,temp->val);
        return new_head;
    }
};