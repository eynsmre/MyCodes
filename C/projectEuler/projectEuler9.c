#include <stdio.h>
#include <math.h>

#define aim 1000
int getTriplet();

int main()
{
	printf("Hello. This app finds the  Pythagorean triplet that provides a + b + c = 1000 and returns a x b x c.\n");
	
	printf("a x b x c = %d",getTriplet());
	//getTriplet();
	return 0;
}

int getTriplet(){
	int i,j,a,b,squareC,intC;
	double c;
	
	for(i=1;i<aim;i++)
	{
		a = i;
		for(j=i+1;j<aim;j++)
		{
			b = j;
			squareC = pow(a,2)+pow(b,2);
			c = sqrt(squareC);
		
			if(fmod(c,1) == 0)
			{
				intC = (int)c;
				
				if(a+b+c == aim)
				{
	
					//printf("%d, %d, %d",a,b,intc);
					return a*b*intC;
				}
			}
		}
	}
}

