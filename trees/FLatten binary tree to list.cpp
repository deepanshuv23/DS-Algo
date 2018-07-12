/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void make(TreeNode *root,TreeNode *A,TreeNode *sol)
{
    if(A==NULL)
    {
        return;
    }
    
    if(root==NULL)
    {
        TreeNode *tmp = new TreeNode(A->val);
        root=tmp;
        sol=root;
    }
    else
    {
        
        TreeNode *tmp = new TreeNode(A->val);
        root->right=tmp;
        root=root->right;
 
    }

    make(root,A->left,sol);
    make(root,A->right,sol);
}
TreeNode* Solution::flatten(TreeNode* A) {

    TreeNode *root=NULL;
    TreeNode *sol=NULL;

    //root;

    vector<int> ans;

    make(root,A,sol);
    return sol;
    
}
