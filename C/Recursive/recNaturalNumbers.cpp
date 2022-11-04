#include <stdio.h>

int recNums(int n); 

int main()
{
	int n=9;
	int x=7;
	printf("%d",recNums(n));
	return 0;
}

int recNums(int n)
{
	int result;
	//printf("%d\n",result);
	
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
	return recNums(n-1)+recNums(n-2);	
	//printf("%d",result);
	//return result;
	
}
