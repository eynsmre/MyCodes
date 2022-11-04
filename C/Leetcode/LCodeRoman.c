#include <stdio.h>

int romanToInt(char * s);

int main()
{
	int result;
	char s[30];
	
	printf("Enter a roman number: ");
	scanf("%s",s);
	
	result = romanToInt(s);
	printf("%d",result);
	
	return 0;
}

int romanToInt(char * s){
	
	int i = 0, x = 0, size = sizeof(s);
	
	for(i=0;i<size;i++)
	switch(s[i])
	{
		case 'I':
			x+=1;
			break;
			
		case 'V':
			x+=5;
			break;
			
		case 'X':
			x+=10;
			break;
			
		case 'L':
			x+=50;
			break;
		
		case 'C':
			x+=100;
			break;
		
		case 'D':
			x+=500;
			break;
			
		case 'M':
			x+=1000;
			break;
	}
	
	for(i=0;i<size;i++)
	{
		if(s[i]=='I' && ( s[i+1]=='V' || s[i+1]=='X'))
			x-=2;
			
		if(s[i]=='X' && ( s[i+1]=='L' || s[i+1]=='C'))
			x-=20;
			
		if(s[i]=='C' && ( s[i+1]=='D' || s[i+1]=='M'))
			x-=200;
	}
	
	return x;
}
