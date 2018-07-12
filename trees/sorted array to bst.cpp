/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* generate(const vector<int> &A,int start,int end)
{
    if(start>end)
        return NULL;
        
    int mid=start+end;
    mid/=2;
    TreeNode* root = new TreeNode(A[mid]);
    root->left=generate(A,start,mid-1);
    root->right=generate(A,mid+1,end);
    
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
 
    TreeNode* root ;
    vector<int> b;
    b=A;
    root=generate(A,0,A.size()-1);
 return root;   
}
