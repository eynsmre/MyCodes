class Solution {
    public int climbStairs(int n) {
        // Initialize an array to store the results of each step
        int res[] = new int[n+1];

        // If n is 0 or 1, return n
        if(n<=2)
            return n;
        
        // Set the first two values of the array to 1 and 2
        res[1] = 1;
        res[2] = 2;

        // Iterate through the array, starting at index 3
        for(int i = 3; i<n+1;i++)
            // Set the value at index i to the sum of the values at the previous two indices
            res[i] = res[i-1] + res [i-2];
        
        // Return the value at the nth index
        return res[n];
    }
}
