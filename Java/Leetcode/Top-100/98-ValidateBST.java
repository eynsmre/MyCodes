/*	Faster solution of
	Leetcode Problem 98 - Validate Binary Search Tree
  	Runtime: 1 ms, faster than 60.87% of Java online submissions for Validate Binary Search Tree.
	Memory Usage: 41.8 MB, less than 92.49% of Java online submissions for Validate Binary Search Tree.
*/

class Solution {
    LinkedList<Integer> x = new LinkedList<Integer>();
    public int i = 0;
    public int isValid = 1;
    
  
    public boolean isValidBST(TreeNode root) {
        //x.add(Integer.MIN_VALUE);
        transporter(root);
        return isValid == 1;
    }
    
    public void transporter(TreeNode root){
        if(isValid!=0){
            if(root == null)
                return;     

            transporter(root.left);
            x.add(root.val);
            if(x.size() > 1 && x.get(i) <= x.get(i-1)){
                isValid = 0;
                return;
            }
            i++;
            transporter(root.right);
        }
    }    
}
