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

    ListNode* mergeNodes(ListNode* head) {
        ListNode* new_head=NULL;
        ListNode* last;
        ListNode* temp=head;
        int sum=0;

        while(temp!=NULL)
        {
            if(temp->val==0)
            {
                if(sum != 0)
                {
                    if(new_head==NULL)
                    {
                        new_head=new ListNode(sum);
                        last=new_head;
                    }
                    else
                    {
                        last->next=new ListNode(sum);
                        last=last->next;
                    }
                }
                    
                sum=0;
            }
            sum += temp->val;
            temp=temp->next;
        }

        return new_head;
    }
};