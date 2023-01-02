// This function returns the number of ways to climb a staircase of n steps
// with the ability to take either 1 or 2 steps at a time.

int climbStairs(int n) {
  int dp[n + 1];

  // Initialize the base cases
  dp[0] = 1;
  dp[1] = 1;

  // Calculate the number of ways to climb the staircase for each i from 2 to n
  for (int i = 2; i <= n; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[n];
}

/*
Logic:
From the (i-1)th step, you can either take 1 step to reach the ith step, 
or you can take 2 steps from (i-2)th step to reach the ith step.
*/