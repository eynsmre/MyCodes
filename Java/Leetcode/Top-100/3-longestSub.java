//solution of leetcode lengthOfLongestSubstrings, problem 3
//Logic: Start from 1 (i). Check before i (j) until marked place (x). Add counter by one and find the biggest length (max). 
class Solution {
    public int lengthOfLongestSubstring(String s) {
  
        
        int i = 1, j = 0, max = 0, counter = 1, x = 0;
        
        if(s.length() == 1)
            return 1;
        
        while(i < s.length()){
        	//if any char is same with charAt(i), x will mark the place after this char.
            while(i<s.length() && s.charAt(i) == s.charAt(j)){
                x = j+1;
                i = i+1;
                j = i-1;
                
                counter = 1;
            }
            if(i<s.length() && s.charAt(i) != s.charAt(j))
                counter++;
            
            if(max < counter)
                max = counter;
            
            //if j came to the marked place (x), add i by one and check for the other posbilities.
            if(j==x){
                i++;
                j = i;
                counter = 1;
            }
            
            //i=3 j=2, i=3 j=1, i=3 j=0 (at first x = 0) counter = 3.
            j--;
        }
        
        return max;
    }
}

      /*int i = 1, j = 0,k = 1, counter = 1, max = 0, x = 0;
        StringBuilder res = new StringBuilder();
        
        if(s.length() == 1)
            return 1;
        
        for(i = 1; i < s.length();i++){
            counter = 1;
            for(j=i-1;j>=x;j--){                
                if(s.charAt(i) == s.charAt(j)){
                    counter = 0;
                    i = j + 1;
                    x = j +1;
                    j = -1;                  
                }  
                
                counter++;
            }
           
            
            if(max < counter)
                max = counter;         
        }*/
