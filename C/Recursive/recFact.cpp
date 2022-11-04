#include <stdio.h>

int a(int n); 

int main()
{
	
	printf("%d",a(5));
	
	return 0;
}

int a(int n)
{
	if(n==1)
		return 1;
		
	return n*a(n-1);
}
