#include <stdio.h>

int sum();

int main()
{
	
	printf("%d", sum());
	return 0;
}

int sum()
{
	int max = 0;
	int size = 1000;
	int i=1;
	
	while(i<size)
	{
		if(i%3==0 || i%5==0)
			max = max + i;		
				
		i++;			
	}

	return max;
}
