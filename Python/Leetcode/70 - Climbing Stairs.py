class Solution(object):
    def climbStairs(self, n):
        # Initialize a list with n+1 zeros
        x = [0] * (n+1)
 
        # If n is 0 or 1, return n
        if(n<=2):
            return n
        
        # Set the first two values of the list to 1 and 2
        x[1] = 1
        x[2] = 2
        
        # Iterate through the list, starting at index 3
        for i in range(3, n+1):
            # Set the value at index i to the sum of the values at the previous two indices
            x[i] = x[i-1] + x[i-2]

        # Return the value at the nth index
        return x[n] 
