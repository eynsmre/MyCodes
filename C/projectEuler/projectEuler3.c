#include <stdio.h>
#include <math.h>


int main()
{
	double myNum = 600851475143;
	int i=0, j=0,count=0, multiple=1, biggest=1;
	int k=0;
	int primes[10000];
	
	for(i=3;i<10000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		
	if(fmod(myNum,j)==0)
	{		
		primes[count]=j;	
		count++;
		
		for(k=0;k<1000;k++)
		{
			multiple*=primes[k];
			if(multiple==myNum)
			goto label;
		}
	}
	
	}
	
	label:
		for(i=0;i<100;i++)
			if(primes[i]>biggest)
				biggest=primes[i];
				
	printf("%d",biggest);
			
			

	return 0;
}
