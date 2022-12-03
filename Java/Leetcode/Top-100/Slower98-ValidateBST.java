/*	First, slower solution of 
	Leetcode Problem 98 - Validate Binary Search Tree
	Runtime: 111ms
*/
class Solution {
    LinkedList<Integer> x = new LinkedList<Integer>();
    
    public boolean isValidBST(TreeNode root) {
        
        int i = 1;
        transporter(root);
        while(i<x.size()){
            if(x.get(i) <= x.get(i-1))
                return false;
            i++;
            
        }
        return true;
    }
    
    public void transporter(TreeNode root){
        if(root == null)
            return;     
        
        transporter(root.left);
        x.add(root.val);
        transporter(root.right);
        
        
    }
    
}
   
   

  
