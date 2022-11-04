#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *crtRandomNum(int n);
void insertionSort(int *arr, int n);

int main()
{
	int n=20, i=0;
	
	int *arr;
	arr=crtRandomNum(n);
	while(i<n)
		printf("%d, ",arr[i++]);
	
	printf("\n\n\n");
	
	insertionSort(arr,n);
	i=0;
	while(i<n)
		printf("%d, ",arr[i++]);
	
	return 0;
}

int *crtRandomNum(int n)
{
	int *nums;
	nums = (int*)malloc(n*sizeof(int));
	
	srand(time(NULL));
	
	for(int i=0;i<n;i++)
		nums[i]= rand()%100+1;
		
	return nums;	
}

void insertionSort(int *arr, int n)
{
	int i,j,key;
	
	for( i=1;i<n;i++)
	{
		key = arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j-=1;
		}
		
		arr[j+1]=key;
	}
	
	
}
