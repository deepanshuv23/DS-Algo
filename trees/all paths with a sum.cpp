/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void find(TreeNode* A, int sum,vector<vector<int> > &ans,vector<int> &temp)
{
    if(A==NULL)
        return;
    
    sum-=A->val;
    temp.push_back(A->val);

    if(sum==0&&A->left==NULL&&A->right==NULL)
    {
        ans.push_back(temp);
    }

    if(A->left)
    {
        find(A->left,sum,ans,temp);
    }
    
    if(A->right)
    {
        find(A->right,sum,ans,temp);
    }

    temp.pop_back();
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int sum) {
    vector<vector<int> > ans;
    vector<int> temp;

    find(A,sum,ans,temp);

    return ans;
}
