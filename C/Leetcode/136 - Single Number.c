/*
Q: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
*/

/*
Note: At first, I could only solve this problem with a time complexity of O(n^2), but the problem creator wants O(n), so I couldn't solve it. 
Then, I checked the solutions part and understood the solution and have made the one given below.
*/

int singleNumber(int* nums, int numsSize){
    // Initialize result to 0
    int result = 0;
    
    // Iterate through the array and XOR each element with result
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    
    // Return the result
    return result;
}


/*

'Taken by aryanttripathi from the solutions part of this problem on LeetCode.'
 
Logic:

We know every number is appears twice except a single number which appears only single time.

See, we already discuss a thing a that xor of a same number with itself is zero, i.e A ^ A = 0
Now, we will look some more property of xor-

1) xor of a same number with itself is zero, i.e A ^ A = 0
2) xor is commutative that means a ^ b = b ^ a.
3) xor of any number with zero is the number itself i.e A ^ 0 = A.

Suppose our array is arr[]: [5, 1, 3, 1, 3, 4, 5, 7, 4]
we will rearrange the array, and take all the numbers together, then our array looks like
                     arr[]: [1, 1, 3, 3, 4, 4, 5, 5, 7]
					 now, take xor of all numbers -
					 1 ^ 1 ^ 3 ^ 3 ^ 4 ^ 4 ^ 5 ^ 5 ^ 7   (rearrange the array)
					   0   ^   0   ^   0   ^   0   ^ 7   (see point number 1)
					               7                     (see point number 3) 
					       


Actually, we don't have to rearrange the array because a XOR b = b XOR a already.

So, our array is arr[]: [5, 1, 3, 1, 3, 4, 5, 7, 4] 

[5, 1, 3, 1, 3, 4, 5, 7, 4]
 ↑  ↑
 5 ^ 1 = 4
 
[5, 1, 3, 1, 3, 4, 5, 7, 4]
       ↑                       
	   4 ^ 3 = 7 (prev answer xor current index)
	   
[5, 1, 3, 1, 3, 4, 5, 7, 4]
	      ↑
		  7 ^ 1 = 6 (prev answer xor current index)
		  
[5, 1, 3, 1, 3, 4, 5, 7, 4]
             ↑
			 6 ^ 3 = 5 (prev answer xor current index)

[5, 1, 3, 1, 3, 4, 5, 7, 4]
                ↑
				5 ^ 4 = 1  (prev answer xor current index)
				
[5, 1, 3, 1, 3, 4, 5, 7, 4]
                   ↑
				   1 ^ 5 = 4 (prev answer xor current index)
				   
[5, 1, 3, 1, 3, 4, 5, 7, 4]
                      ↑
					  4 ^ 7 = 3 (prev answer xor current index)
					  
[5, 1, 3, 1, 3, 4, 5, 7, 4]
                         ↑
						 3 ^ 4 = 7 (prev answer xor current index)
						 
So, the element which we got as left should be our answer, so the answer is '7'

*/