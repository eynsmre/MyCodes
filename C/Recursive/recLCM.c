#include <stdio.h>

int recLCM(int n1,int n2);

int main()
{
	int result=recLCM(973,112);
	
	printf("%d",result);
	
	return 0;
}

int recLCM(int n1,int n2)
{
	static int v=n1;
	
	
	if(v%n2==0 && v%n1==0)
		return v;
		
	v++;
	
	recLCM(n1,n2);
}
