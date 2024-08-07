/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inOrder(TreeNode * root,vector<int>& arr)
{
  if (root == NULL) {
    // vector<int> arr;
    return;
  }

    inOrder(root->left,arr);
    arr.push_back(root->data);
    inOrder(root->right,arr);
}

void preOrder(TreeNode * root,vector<int>& arr)
{
    if (root == NULL) {
        // vector<int> arr;
        return;
    }

    arr.push_back(root->data);
    preOrder(root->left,arr);
    preOrder(root->right,arr);
}

void postOrder(TreeNode * root,vector<int>& arr)
{
    if (root == NULL) {
        // vector<int> arr;
        return;
    }

    postOrder(root->left,arr);
    postOrder(root->right,arr);
    arr.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> dummy;

    inOrder(root,dummy);  
    ans.push_back(dummy);
    dummy.clear();

    preOrder(root,dummy);
    ans.push_back(dummy);
    
    dummy.clear();
    postOrder(root,dummy);
    ans.push_back(dummy);

    return ans;

}