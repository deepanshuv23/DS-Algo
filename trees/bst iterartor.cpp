stack<TreeNode*> st;
TreeNode* curr = NULL;

BSTIterator::BSTIterator(TreeNode *root) {
    while(!st.empty()){
        st.pop();
    }
    curr = root;
    while(curr != NULL){
        st.push(curr);
        curr = curr->left;
    }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(st.empty()){
        return false;
    }
    return true;
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(st.empty()){
        return -1;
    }
    curr = st.top();
    int ans = curr->val;
    curr = curr->right;
    st.pop();
    while(curr != NULL){
        st.push(curr);
        curr = curr->left;
    }
    
    return ans;
}
