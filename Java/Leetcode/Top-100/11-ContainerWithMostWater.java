class Solution {
    public int maxArea(int[] height) {
       int i=0, j=height.length-1, capacity = -1, max = 0;

        while(i<j){
            
            if(height[i]>height[j]){
                capacity = height[j] * (j-i);
                j--;
            }
            else{
                capacity = height[i] * (j-i);
                i++;
            }
            if(capacity>max)
                max = capacity;
       }

       return max;
    }
}