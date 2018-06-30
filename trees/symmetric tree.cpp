/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int check(TreeNode* r1,TreeNode* r2)
{

    if(!r1||!r2)                    // one of the two roots must me null for this condition
        return r1==r2;
    
    if(r1->val!=r2->val)
        return 0;
    

    return check(r1->left,r2->right)&&
           check(r1->right,r2->left);
}

int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL)
        return 0;
    

    return check(A->left,A->right);
}
