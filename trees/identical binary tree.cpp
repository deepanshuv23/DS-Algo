/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool check(TreeNode* A, TreeNode* B)
{
    if(A==NULL&&B==NULL)
    {
        return 1;
    }
    if(A==NULL||B==NULL)
        return 0;
    
    if(A->val==B->val)
    {
        return min(check(A->left,B->left),check(A->right,B->right));
    }

    return 0;
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    
    return check(A,B);
}
