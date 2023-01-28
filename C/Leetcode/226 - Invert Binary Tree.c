Q: Given the root of a binary tree, invert the tree, and return its root

struct TreeNode* invertTree(struct TreeNode* root){
    if(root == NULL || (root->left == NULL && root->right == NULL ) )
        return root;

    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    invertTree(root->left);
    invertTree(root->right);

    return root;
}
