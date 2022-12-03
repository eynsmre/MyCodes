/*	Solution for
	Leetcode problem 230 - Kth Smallest Element in a BST
	Runtime: 0 ms, faster than 100.00% of Java online submissions for Kth Smallest Element in a BST.
	Memory Usage: 41.7 MB, less than 99.71% of Java online submissions for Kth Smallest Element in a BST.
*/

class Solution {
    public int x = 0;
    public int num = 0;
    
    public int kthSmallest(TreeNode root, int k) {
        
        finder(root,k);
        return num;
        
    }
    
    //find the k'th smallest element in Binary Search Tree.
    //first, go until the smallest element
    //then, while climbing up, increment x one by one.
    //when x reached to k, stop recursion.  
    public void finder(TreeNode root, int k){
        if(root == null)
            return;
       
            
        if(x<k){            
            finder(root.left,k);
            x++;
             
            if(k==x){
                num = root.val;
                return;
            }
            
            finder(root.right,k);      
        }
    }
}
