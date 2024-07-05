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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans(2,-1);

        if(head == NULL || head->next == NULL)
            return ans;

        ListNode* start=head;
        ListNode* mid=start->next;
        ListNode* end=mid->next;

        int count=1,first=-1,second=-1;

        while(end != NULL)
        {
            if((mid->val > start->val && mid->val > end->val) 
            || (mid ->val < start->val && mid->val < end->val))
            {
                if(first == -1)
                    first=count;
                else if(second == -1)
                {
                    second=count;
                    ans[0] = second - first;
                    ans[1] = ans[0];
                }
                else
                {
                    ans[1] = count - first;
                    ans[0] = min(ans[0],count - second);

                    second = count;
                }
            }
            count++;
            start=mid;
            mid=end;
            end=end->next;
        }

        return ans;
    }
};