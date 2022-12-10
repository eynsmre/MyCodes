// Solution of LeetCode Problem 20. Valid Parentheses
// Runtime 2 ms - Beats 88.88%

class Solution {
    public boolean isValid(String s) {
    	   //a new stack to put parantheses in.
        Stack<Character> x = new Stack<>();
        int i;
        
        //length <= 1 means there can't be closing paranthese
        if(s.length()<=1) return false;
        
        for(i=0;i<s.length(); i++){
        	
		  //put any opening paranthese inside stack 	
            if(s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{' )
                x.push(s.charAt(i));
            //if there is any closing brackets and stack is empty return false
            //otherwise pop and check if opening bracket is match with closing bracket.
            else if(s.charAt(i) == ')' || s.charAt(i) == ']' || s.charAt(i) == '}' ){
                if(x.isEmpty()) return false;
                char opening = x.pop();
                if(s.charAt(i) - opening !=1 && s.charAt(i) - opening !=2)
                    return false;
            }
        }
        //after loop finished, if there is still paranthese inside stack
        //it means string is not valid. Return false.
        if(!x.isEmpty())    return false;
        
        //otherwise return true
        return true;
    }