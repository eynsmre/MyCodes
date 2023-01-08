import java.util.HashMap;

/* This is the solution that I implemented based on what I learned in the fall term. */

class Solution {
    public int majorityElement(int[] nums) {

        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        for(int i=0; i<nums.length; i++){
            if(map.containsKey(nums[i]))
                map.replace(nums[i],map.get(nums[i]) + 1);
            else
                map.put(nums[i],1);
        }

        
        int maxValue = Collections.max(map.values());
        int maxKey = -1;
        boolean found = false;


        Iterator<Map.Entry<Integer, Integer>> iterator = map.entrySet().iterator();
        while (!found && iterator.hasNext()) {
            Map.Entry<Integer, Integer> entry = iterator.next();
            if (entry.getValue() == maxValue) {
                maxKey = entry.getKey();
                found = true;
            }
        }

        return found ? maxKey : -1;
    }
}