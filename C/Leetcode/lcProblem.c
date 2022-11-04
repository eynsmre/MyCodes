#include <stdio.h>

int *findSum(int arr[],int n);

int main()
{
	int arr[]={3,5,11,13,22};
	int n=33;
	
	int *result;
	result=findSum(arr,n);
	int a = result[0];
	int b = result[1];
	
	printf("The bigesst sum is arr[%d]=%d + arr[%d]=%d equals %d" ,a,arr[a],b,arr[b],n);
	
	return 0;
}

int *findSum(int arr[],int n)
{
	int keep[2];
	int i,j;
	for(i=0;i<6;i++)
		for(j=i+1;j<6;j++)
			if(arr[i]+arr[j]==n)
			{
				keep[0]=i;
				keep[1]=j;
				//printf("%d,%d",keep[0],keep[1]);
				
				return keep;
			}
			
			
}
