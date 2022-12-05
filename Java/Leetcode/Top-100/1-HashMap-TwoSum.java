/*	I have learned what is HashMap and how to use it.
	I made this by looking and understanding
	a solution in leetcode's discuss section       */

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        Map<Integer, Integer> finder = new HashMap<Integer, Integer>();
        int i = 0;
        
        while(i<nums.length){            
            
            if(finder.containsKey(target-nums[i])){
                result[0] = i;
                result[1] = finder.get(target-nums[i]);
                return result;
            }
            finder.put(nums[i],i);
            i++;
        }
        
        return result;
    } 
        
       
}

    
       
        