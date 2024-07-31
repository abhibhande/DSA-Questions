/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head == NULL)
            return head;

        map<Node*,Node*> mp;
        mp[NULL]=NULL;

        Node *newhead = new Node(head->val);
        Node *temp1=head->next;
        Node *temp2=newhead;

        mp[head]=newhead;

        while(temp1 != NULL)
        {
            temp2->next = new Node(temp1->val);
            temp2=temp2->next;
            mp[temp1]=temp2;
            temp1=temp1->next;
        }

        temp1=head;
        temp2=newhead;

        while( temp1 != NULL )
        {
            temp2->random = mp[temp1->random];
            temp1=temp1->next;
            temp2=temp2->next;
        }

        return newhead;
    }
};