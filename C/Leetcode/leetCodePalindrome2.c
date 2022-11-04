#include <stdio.h>

bool isPolindrome(int x){
	
	int temp = x;
	int reversed = 0;
	
	while(temp)
	{
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}
	
	return(reversed==x);
}


int main()
 {
 	int n;
 	
 	printf("Enter a number to check whether it is palindrome or not:\n");
 	scanf("%d",&n);
 	
 	if(isPolindrome(n)==true)
 		printf("\n%d is a palindrome number.", n);
 	else
 		printf("\n%d is not a palindrome number", n);
 	
 	
 	return 0;
 }
