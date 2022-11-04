#include <stdio.h>
#include <stdlib.h>

char * longestPalindrome(char * s);

int main(){
	
	char arr[100];
	scanf("%s",arr);
	printf("\n%s", longestPalindrome(arr));
	
	return 0;
}

char * longestPalindrome(char * s){
	
	char *temp = s, longest[1000];
	int mid = strlen(s)-2, i, j, max = 0, start, end;
	printf("There are %d character.\n",strlen(s));

	for(mid = strlen(s)-2; mid>0;mid--){
	i = j = mid;
	
	//if the characters before or after the mid same with mid: 
	if(s[mid+1] == s[mid])
		i +=1;
	if(s[mid-1] == s[mid])
		j-=1;
	//check the left and right side of mid:	
		while(j>=1 && i<strlen(s) && s[i+1]==s[j-1]){
			j--;
			i++;	
		}
	//if there is a longest palindrome:
		if(i-j>max){
			max = i-j+1;
			start = j;
			end = i;
		}
			
	}
	
	printf("it starts from %d ends at %d: max = %d character",start+1,end+1,max);
	int temp1 = start;
	for(i=0;i<=end - temp1;i++)
		longest[i]=s[start++];
		
	return longest;
}
