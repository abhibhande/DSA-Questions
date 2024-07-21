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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1->next;
        ListNode* t2=l2->next;
        int sum = l1->val + l2->val;

        ListNode* head=new ListNode(sum % 10);
        int rem = sum / 10;
        ListNode* t3=head;

        while(t1 != NULL || t2 !=NULL)
        {   
            sum = 0;
            if(t1 != NULL)
            {
                sum += t1->val;
                t1=t1->next;
            }

            if(t2 != NULL)
            {
                sum += t2->val;
                t2=t2->next;
            }

            sum+=rem;
            t3->next=new ListNode(sum % 10);
            rem=sum / 10;
            t3=t3->next;
        }
        if(rem > 0)
            t3->next=new ListNode(1);
        return head;
    }
};