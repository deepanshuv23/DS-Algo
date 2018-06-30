/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool check(TreeNode* A, int sum)
{
    if(A==NULL)
    {
        return 0;
    }

    if(sum==A->val&&A->left==NULL&&A->right==NULL)
        return 1;
    
    return max(check(A->left,sum-(A->val)),check(A->right,sum-(A->val)));

}
int Solution::hasPathSum(TreeNode* A, int B) {
    
    return check(A,B);
}
