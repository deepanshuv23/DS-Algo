void invert(TreeNode* root)
{
    if (!root || (!root->left && !root->right))
        return;
    invert(root->left);
    invert(root->right);
    TreeNode* tempLNode = root->left;
    root->left = root->right;
    root->right = tempLNode;
}
TreeNode* Solution::invertTree(TreeNode* root) {
    invert(root);
    return root;
}