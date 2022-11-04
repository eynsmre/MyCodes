#include <stdio.h>
#include <math.h>
int main()
{

	int i, j, counter;
	
	for(i=10000;i<2500000000;i++)
	{
		counter=0;
		for(j=11;j<20;j++)
		{
			if(i%j!=0)
			break;
			
			if(i%j==0)
			{
				counter++;
			}
			
		}
			if(counter==9)
			break;
	}
	
	printf("%d",i);
	
	return 0;
}
