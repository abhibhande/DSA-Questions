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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* pre=head,*post=head->next;

        while(post!=NULL)
        {
            ListNode* temp=NULL;
            while(post != NULL && pre->val == post->val)
            {
                post=post->next;
            }
            
            pre->next=post;
            pre=post;

            if(post == NULL)
                break;
            post=post->next;;
        }

        return head;
    }
};