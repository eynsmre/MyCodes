#include <stdio.h>

int recPrime(int n); 

int main()
{
	int n;
	printf("enter a number: ");
	scanf("%d",&n);
	
	if(recPrime(n)==1)
		printf("%d is prime",n);
	else	
		printf("%d is not prime because %d can divide it.",n,recPrime(n));

	return 0;
}

int recPrime(int n)
{
	static int i=2;
	
	if(i==n)
		return 1;
	if(n%i==0)
		return i;
	
	i+=1;
		
	recPrime(n);
	
}

