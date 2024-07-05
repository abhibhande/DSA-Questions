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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;

        if(head == NULL || head->next == NULL)
            return NULL;
        if(head->next->next == NULL)
            {
                head->next=NULL;
                return head;
            }

        while(fast != NULL && fast->next != NULL )
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        return head;
    }
};


//Strivers Solution Same but some changes to increase Code Quality

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
    ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode* slow=head;
        ListNode* fast=head->next->next;

        while(fast != NULL && fast->next != NULL )
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=slow->next;
        slow->next=slow->next->next;
        return head;
    }
};