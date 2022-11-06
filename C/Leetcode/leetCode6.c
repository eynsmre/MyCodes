#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * convert(char * s, int numRows);

int main(){
	
	char arr[100]="ABCDEF";
	convert(arr,3);
	
	return 0;
}

char * convert(char * s, int numRows){
	
	int i,counter = 0,j;
	char space[numRows];
//	for(i=0;i<numRows;i++)
//		space[i]='X';
//	//printf("%s",space);
//	
//	for(i=0;i<=strlen(s)*2;i+=numRows){
//		//printf("%d",i);
//		if(i == 2*(numRows+counter+1)){
//			printf("\n");
//			++counter;
//			i = counter;
//		}
//		printf("%c%s",s[i++],space);
//		
//	}

	for(i=0 ; i < (strlen(s)-1)*2 ; i+=numRows/(counter+1))
	{
		if(i>strlen(s)){
			i = i - strlen(s) -1;
			counter++;
			
		}
		
		
		if(i<strlen(s)){
		
			printf("%c",s[i]);
			if(counter<numRows)
				for(j=0;j<numRows/(counter+1);j++)
				{
					printf("X");
				
				}
			else
				for(j=0;j<numRows;j++)
				{
					printf("X");
				
				}

		//printf(" %d ",i);
	
	}
}
}
	
	


