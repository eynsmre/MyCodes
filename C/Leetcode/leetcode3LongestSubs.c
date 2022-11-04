#include <stdio.h>
#include <stdlib.h>

#define size 100

int lengthOfLongestSubstring(char * s);

int main(){
	
	int max;
	char *arr = (char*)malloc(sizeof(char)*size);
	scanf("%s",arr);
	//printf("%d",strlen(arr));
	max = lengthOfLongestSubstring(arr);
	printf("%d",max);
	return 0;
}

int lengthOfLongestSubstring(char * s){
	
	int i,j,counter,max = 0,same = 0;
	//printf("%d",strlen(s));
		
	for(i=1;i<strlen(s);i++){
		j = same;
		while(j<i){
			if(s[j]==s[i])
			{
				same = i;
			}
			counter = i - same + 1;
			if(counter>max)
				max = counter;
				
			j++;
		}
			
	}
	
	return max;
}
