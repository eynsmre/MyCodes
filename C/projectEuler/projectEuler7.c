#include <stdio.h>

int main()
{
	int i,j,count=0;
	
	for(i=2;i<1000000;i++)
	{
		for(j=i-1;j>=2;j--)
		{
			if(i%j==0)
				goto label;
				
		}
		count++;
		label:
		if(count==10001)
			break;
		
	}
	
	printf("%d",i);
	
	return 0;
}
