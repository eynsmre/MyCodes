#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxArea(int* height, int heightSize);
int maxArea_2(int* heights, int n);
int AlternativeMaxArea(int* height, int heightSize);
int *generateRandomNumbers(int n);

int main()
{
	int n = 9, i;
	int *rN = generateRandomNumbers(n);
	
	for(i=0;i<n;i++)
		printf("%d, ", rN[i]);
		
	printf("\n%d", maxArea(rN, n));
	printf("\n%d", AlternativeMaxArea(rN, n));
	printf("\n%d", maxArea_2(rN, n));
}

int *generateRandomNumbers(int n){

	int i=0, *rN;
	rN = (int*)malloc(n*sizeof(int));
	srand(time(NULL));
	for(i=0;i<n;i++)
		rN[i] = rand()%10 + 1;
	
	return rN;	
}
//7 5 3 8 11

int maxArea(int* height, int heightSize){
    
    int i=0, j=0,maxNum=0;
    
    for(i=0;i<heightSize;i++)
    	for(j=i+1;j<heightSize;j++)//while(j<heightSize)
    	{
		
    		if(height[j]<=height[i])
    		{
    			if(maxNum < height[j]*(j-i))
    			maxNum=height[j]*(j-i);
			}
			else
			{
				if(maxNum < height[i]*(j-i))
				maxNum = height[i]*(j-i);
			}
			
		}
		
		return maxNum;
}
int AlternativeMaxArea(int* height, int heightSize){
	
	int i=0, j=0,maxNum=0;
	
 	for(i=0;i<heightSize;i++)
 	{
	 	j=i;
    	while(j<heightSize)
    	{
		
    		if(height[j]<=height[i])
    		{
    			if(maxNum < height[j]*(j-i))
    			maxNum=height[j]*(j-i);
			}
			else
			{
				if(maxNum < height[i]*(j-i))
				maxNum = height[i]*(j-i);
			}
			j++;	
		}
		
	}
	
		return maxNum;
}
int maxArea_2(int* heights, int n) 
{
    int water = 0, *i = heights, *j = i + n - 1;
    //printf(" %d",*j);
    while (i < j) {
        int h = *i < *j ? *i : *j;
        int w = (j - i) * h;
        if (w > water) water = w;
        while (*i <= h && i < j) i++;
        while (*j <= h && i < j) j--;
    }
    return water;
}
