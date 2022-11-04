#include <stdio.h>
#include <string.h>
#include <math.h>

//find the biggest palindrome made from the product of two 3-digit numbers.
int getBiggest();
//checks if the number is polindrome.
int isPalindrome(int data);

int main(){
	
	printf("%d", getBiggest());
	return 0;
}

int getBiggest(){
	int i=999, j=999, max=0;
	
	for(i=999;i>100;i--)
		for(j=999;j>100;j--)
		{
			if(isPalindrome2(i*j)==1)
				if((i*j)>max)
					max = i*j;
				 
				
		}
	return max;
}



int isPalindrome2(int data){
	int i,counter = 0, temp = data, reversed = 0;
	int reverse[10];
	
	for(i=1;i<8;i++)
		if(temp>0){
			reverse[i-1] = temp%10;
			temp/=10;
			counter++;
		}
	
	
	for(i=0;i<counter;i++){
		reversed += reverse[i]* (pow(10,(counter-i-1)));
	}
		
	return (reversed == data ? 1 : 0);	
	
}




