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
    ListNode* reverse(ListNode* node)
    {
        if(node==NULL || node->next == NULL)
            return node;
        
        ListNode* head=reverse(node->next);
        ListNode* front=node->next;
        front->next=node;
        node->next=NULL;
        return head;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* head2=reverse(slow->next);

        temp=head;
        while(head2!=NULL)
        {
            if(temp->val != head2->val)
                return false;
            
            temp=temp->next;
            head2=head2->next;
        }

        return true;
    }
};