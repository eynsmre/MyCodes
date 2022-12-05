class Solution {
    public int[] twoSum(int[] nums, int target) {
        int start = 0, end = -1, i =0 ,j=0;
        int[]res = new int[2];
        
        for(i=0;i<nums.length;i++){
            for(j=i+1;j<nums.length;j++){
                if(nums[i] + nums[j] == target){
                    res[0] = i;
                    res[1] = j;
                    j = nums.length;
                    i = nums.length;
                }                   
            }
        }                           
        return res;
    }
        
}