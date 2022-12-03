/* 	Leetcode solution of
	Problem 4 - Median of Two Sorted Arrays
	Runtime: 2 ms, faster than 100.00% of Java online submissions for Median of Two Sorted Arrays.
	Memory Usage: 43.5 MB, less than 83.43% of Java online submissions for Median of Two Sorted Arrays.
*/

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int i = 0, j = 0, k = 0;
        double median;
        int xlength =  nums1.length + nums2.length;
        int[] finalArr = new int[xlength];
        
        //Copy numbers from smallest to largest into the finalArr 
        while(k<xlength && i<nums1.length && j<nums2.length){
            if(nums1[i] < nums2[j]){
                finalArr[k] = nums1[i];
                i++;
            }
            else if(nums1[i] > nums2[j]){
                finalArr[k] = nums2[j];
                j++;
            }
            else{
                finalArr[k] = nums2[j];
                k++;
                finalArr[k] = nums1[i];
                
                i++;
                j++;
            }
            
            
            k++;
        }
        
        //if loop has finished before copy all elements
        //because i or j is bigger than length
		//copy remain elements to finalArr 
        if(i<nums1.length)
            while(i<nums1.length){
                finalArr[k] = nums1[i];        
                i++;
                k++;
            }
        else if(j<nums2.length)
            while(j<nums2.length){
                finalArr[k] = nums2[j];
                j++;
                k++;
            }
        
        //if size is even, take average of 2 numbers in the middle of array.
        if(finalArr.length % 2 == 0)
            median = ((double)finalArr[(finalArr.length - 1)/2] + (double)finalArr[(finalArr.length - 1)/2 + 1]) / 2.0;
        else
            median = (double)finalArr[(finalArr.length - 1)/2];
        
        
        return median;
    }
}
