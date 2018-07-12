int index(vector<int> &inorder, int val, int start, int end){
    int i;
    for(i = start; i <= end; i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
} 

TreeNode* make(vector<int> &postorder, vector<int> &inorder, int start, int end, int &preInd){
    if(start > end){
        return NULL;
    }
    
    TreeNode* root = new TreeNode(postorder[preInd]);
    preInd--;
    
    if(start == end){
        return root;
    }
    
    int ind = index(inorder, root->val, start, end);

    root->right = make(postorder, inorder, ind+1, end, preInd);
    root->left = make(postorder, inorder, start, ind-1, preInd);
    
    
    return root;
} 
 
TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int pre = postorder.size()-1 ;
    return make(postorder, inorder, 0, postorder.size()-1, pre);
    
}