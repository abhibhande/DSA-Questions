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

    ListNode* findKthNode(ListNode* head,int n)
    {
        n--;
        while(n>0)
        {
            n--;
            if(head->next == NULL)
                return NULL;
            head=head->next;
        }
        return head;
    }

    ListNode* reverseList(ListNode* head)
    {
        ListNode* first = NULL;
        ListNode* second = head;

        if(head->next == NULL)
            return head;
        
        while(second != NULL)
        {
            ListNode* temp = second->next;
            second->next = first;
            first = second;
            second = temp;
        }
        return first;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* first=head,*kthNode=NULL,*pre=NULL,*next=NULL;

        while(first != NULL)
        {
            kthNode=findKthNode(first,k);
            if(kthNode == NULL)
            {
                if( pre!= NULL)
                    pre->next = first;
                first = NULL;
            }
            else
            {
                next=kthNode->next;
                kthNode->next=NULL;

                reverseList(first);
                if(head == first)
                    head = kthNode;
                
                if(pre != NULL)
                    pre->next=kthNode;
                pre=first;
                first=next;
            }
        }

        return head;

    }
};