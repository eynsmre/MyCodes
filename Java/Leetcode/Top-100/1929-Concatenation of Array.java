Runtime 1 ms - Beats 98.91%
Memory 43.1 MB - Beats 80.45%

class Solution {
    // This function creates an array 'ans' of length 2 * nums.length
    // where ans[i] == nums[i] and ans[i + nums.length] == nums[i]
    // for 0 <= i < nums.length (0-indexed).
    public int[] getConcatenation(int[] nums) {
        // Create the 'ans' array with the required length
        int[] ans = new int[nums.length *2];

        // Iterate over the elements of the 'nums' array
        for(int i = 0; i < nums.length; i++) {
            // Assign the current element of 'nums' to the corresponding
            // position in the 'ans' array
            ans[i] = nums[i];
            // Assign the current element of 'nums' to the corresponding
            // position in the second half of the 'ans' array
            ans[i + nums.length] = nums[i];
        }

        // Return the 'ans' array
        return ans;
    }
}