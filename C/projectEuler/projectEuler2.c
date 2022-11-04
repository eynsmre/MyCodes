#include <stdio.h>
#include <stdlib.h>

#define N 4000000

int sumOfEven(int *fib, int last);

int main()
{
	
	int *fib = (int*)malloc(sizeof(int)*512);
	fib[0] = 1;
	fib[1] = 2;
	int last = 0;
	
	int i = 0;

		while(fib[i]<N){
		{
		fib[i+2]=fib[i]+fib[i+1];
		last = i;
		i++;
		}
		
	}
	
	printf("Last : %d Number: %d\n\n", last, fib[last]);
	i=0;
   while (fib[i]<N){
        printf("%3d   %10d\n", i, fib[i]);
        i++;
	}
	int sum1 = sumOfEven(fib, last);
	printf("\n The result of sum of even numbers less than 4 million is : %d",sum1);
	
	return 0;
}

int sumOfEven(int* fib,int last){
	
	int sum=0,i;
	
	for(i=0;i<last+1;i++)
	{
		if(fib[i]%2==0)
			sum+=fib[i];
	}
	
	return sum;
}

