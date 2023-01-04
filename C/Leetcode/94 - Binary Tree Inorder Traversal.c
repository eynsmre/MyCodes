int* inorderTraversal(struct TreeNode* root, int* returnSize){
    // Initialize the return size to 0 and allocate memory for the result array
    *returnSize = 0;
    int* result = (int*)malloc(sizeof(int)*2);

    // Call the helper function to do the inorder traversal
    helper(root, returnSize, &result);
    return result;
}

void helper(struct TreeNode* root, int* returnSize, int** result){
    // Base case: if the root is NULL, return
    if(root == NULL)
        return;
    
    // Recursively call the helper function on the left subtree
    helper(root->left, returnSize, result);
    
    // Add the root's value to the result array
    (*result)[*returnSize] = root->val;
    
    // Increment the return size and reallocate memory for the result array
    *returnSize +=1;
    *result = realloc(*result, ((*returnSize)+1) * sizeof(int));
    
    // Recursively call the helper function on the right subtree
    helper(root->right,returnSize, result);
}
