#include <stdio.h>
#include <stdlib.h>


int *divisors(int num);
int *isAbundant(int *arr, int num);

int main(){
    
    
    int *arr = divisors(12);
    
    for(int i=1;i<=arr[0];i++)
    	printf("%d ",arr[i]);
    

    return 0;
}

int *divisors(int num)
{
	
	int *arr = (int*)malloc(sizeof(int)*4);
	int counter = 0;
	
	for(int i=1; i < num/2 +1; i++)
	{
		if( num % i == 0 )
		{
			counter++;
			arr[0]=counter;
			arr[counter]=i;
			
			arr = (int*)realloc(arr,counter);
		}
	}
	
	return arr;
}

int *isAbundant(int *arr, int num)
{
	int sum = 0;
	int *abundants = (int*)malloc(sizeof(int)*4);
	
	for(i=1;i<=arr[0];i++)
	{
		sum+= arr[i];
	}
	
	for(i=0;i<=arr[0];i++)
	{
		if(sum>num)
		{
			abundants[i]=num;
		}
	}

	return abundants;
}
