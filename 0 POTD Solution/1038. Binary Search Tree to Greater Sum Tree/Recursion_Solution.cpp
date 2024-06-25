/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int totalSum(TreeNode* node,int sum)
    {
        if(node == NULL)
        {
            return 0;
        }


        int val2=totalSum(node->right,sum);
        sum = val2 == 0? sum : val2;
        sum+=node->val;
        node->val=sum;
        int val=totalSum(node->left,sum);
        sum = val == 0 ? sum : val;
        return sum;
    }

    TreeNode* bstToGst(TreeNode* root) {
        int i=totalSum(root,0);
        return root;
    }
};