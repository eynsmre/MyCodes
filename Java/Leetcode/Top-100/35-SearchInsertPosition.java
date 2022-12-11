//Leetcode solution of problem 35
//Runtime 0ms - Beats %100.00
//Memory 42.3 MB - Beats %80.31

class Solution {
    public int searchInsert(int[] nums, int target) {
        int i = binarySearch(nums,target);
        return i;
  
    }

    public int binarySearch(int[] array, int key) {
    int low = 0;
    int high = array.length - 1;
    int mid = (low + high) / 2;
    int midVal = array[mid];

    while (low <= high) {
        mid = (low + high) / 2;    
        midVal = array[mid];

        if (midVal < key) {
            low = mid + 1;
        } else if (midVal > key) {
            high = mid - 1;
        } else {
            // key found
            return mid;
        }
    }
    // key not found so tell me the place
    return low;
    }

}