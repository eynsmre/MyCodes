#include <stdio.h>

void recverse(char tmp[],char arr[]); 

int main()
{
	
	char arr[]="deliinsannn";
	char tmp[16];
	for(int k=0;k<sizeof(arr);k++)
				tmp[k]=arr[k];
	
	
	recverse(tmp,arr);
	
	return 0;
	
}

void recverse(char tmp[],char arr[])
{
	static int i=sizeof(arr);
	static int j=0;
	
	//printf("%d,%d,%d",i,j,sizeof(arr));
	i-=1;
	j+=1;
	
	
	arr[j]=tmp[i];
	printf("%c",arr[j]);
	
	if(i==0)
	return;
	
	recverse(tmp,arr);
	
}
