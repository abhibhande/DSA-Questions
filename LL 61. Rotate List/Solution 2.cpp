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
    int len(ListNode* head)
    {
        int n=1;
        while(head->next != NULL)
        {
            n++;
            head=head->next;
        }
        return n;
    }

    ListNode* findKthNode(ListNode* head, int k)
    {
        k--;
        ListNode* temp=head;

        while(k > 0 && temp != NULL)
        {
            k--;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head == NULL || head->next == NULL)
            return head;
        
        int n=len(head);
        k=(k % n);

        if(k == 0)
            return head;

        ListNode* pre=findKthNode(head,n-k);
        if(pre == NULL)return head;

        ListNode* next=pre->next;
        ListNode* head2=pre->next;
        pre->next = NULL;

        while(next ->next != NULL)
        {
            next=next->next;
        }
        next->next=head;
        head=head2;
        return head;
    }
};