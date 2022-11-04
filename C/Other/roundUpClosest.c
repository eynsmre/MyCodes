#include <stdio.h>
#include <stdlib.h>

void getNumbers(int *nums,int *size);
void makeClosest(int *nums, int*size);

int main()
{
	printf("HELLO. This program rounds up the numbers you text to the closest number.")
	int n=2;
	int *nums;
	nums=(int *)malloc(n*sizeof(int));
	
	getNumbers(nums,&n);
	makeClosest(nums,&n);
	
	int i;
	
	while(i<n)
	{
	printf("%d\n",nums[i++]);

	}
	
	return 0;
}

void getNumbers(int *nums, int *size)
{
	
	int i;
	
	printf("Enter a number: \nIf you want to stop enter -1.");
	scanf("%d",&nums[i]);
	
	while(nums[i]!=-1)
	{	
	
	i++;
	
	if(*size==i)
	{
		*size*=2;
		nums=(int*)realloc(nums,*size*sizeof(int));
	}
	
	
	printf("Enter a number: ");
	scanf("%d",&nums[i]);
	
	}
	
	*size=i;
	
	nums=(int*)realloc(nums,i*sizeof(int));

		
}

void makeClosest(int *nums, int *size)
{
	int i,j;
	i=j=0;
	
	for(i=0;i<1000;i+=10)
		for(j=0;j<*size;j++)
		{
			if(nums[j]==i)
				nums[j]=i;
				
			else if(nums[j]>=i+5 && nums[j]<i+10)
				nums[j]=i+10;
				
			else if(nums[j]>i && nums[j]<i+5)
				nums[j]=i;
		}
}
