//200101049
//YUNUS EMRE ERKELEÞ

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define STRINGSIZE 2000
 
 
char vowel[] = "aeouiAEOUI";
char consonant[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

void readUntilEOF(char text[]);
void capitalize(char text[]);
void closeBrackets(char text[]);
void correct(char text[]); 			//correct the sentences which doesn't have a space after a punctuation.
void spelling(char text1[]);


int main()
{
	
	char userStr[STRINGSIZE],
         outputStr[STRINGSIZE];
	
	printf("This is a spelling app for turkish words. Enter the word you want to spell: ");
	
	readUntilEOF(outputStr);
	correct(outputStr);
	closeBrackets(outputStr);
	capitalize(outputStr);
	
	printf("\nHere is the corrected version of your text: \n\n");
	fprintf(stdout, outputStr);
	
	spelling(outputStr);
	
	printf("\n\nHere is the spelled version of the corrected text: \n\n");	
	fprintf(stdout, outputStr);
	
	
return 0;
}



void readUntilEOF(char str[])
{
    char ch;
    int i = 0;
    
    ch = getchar();
    while(ch!=EOF)
    {   
        if (i < STRINGSIZE -1)
        {
            str[i] = ch;
            i++;
        }
        printf("If you want to stop press Ctrl + Z.\nEnter a number: ");
        ch = getchar();
    }
    str[i] = '\0';
}


bool check(char x[],char y)   //Writer will choose the word(x) and vowel or constonant(y) and this function will
{							 //check if there is a vowel letter or a constonant letter (as an ex. LINE 179)
	int i;
	
	for(i = 0; i < strlen(x) ; i++)
		if(x[i] == y)
			return true;
		
	return false;
}



void correct(char text[])
{
	int i, n, p;
	char textcpy[STRINGSIZE];
	
	for(i = 0 ; i < STRINGSIZE ; i++)
	{
		if(ispunct(text[i]) != 0 && text[i+1] != ' ')
		{
			if(text[i] == '(' || text[i] == '{' || text[i] == '[')	
			continue;
			
			for(p=i+1 ; p < STRINGSIZE ; p++)
				textcpy[p-i-1] = text[p];
			
			text[i+1] = ' ';
			
			for(n = i+2; n < STRINGSIZE ; n++)
				text[n] = textcpy[n-i-2];
			
		}
	}	
}



void closeBrackets(char text[])
{
	
	char brackets, textcpy_2[STRINGSIZE];
	int i, n, s;
	
	for(i = 0 ; i < STRINGSIZE ; i++)
	{
				
		if(text[i] == '(' || text[i] == '{' || text[i] == '[')
		{
			if(text[i] == '(')
				brackets = text[i] + 1;   //do brackets = ')'
			
			else
				brackets = text[i] + 2;  //do brackets = ']' or '}'
			
			for(n = i ; n < STRINGSIZE ; n++)
			{
				if(text[n-1] == brackets)
					break;
				
				if(text[n] == '.')
				{
					int k,s;
					for(k = n ; k < STRINGSIZE ; k++)  //send everything after '.' including '.' to textcpy_2
						textcpy_2[k-n] = text[k];
						
					text[n] = brackets;
					
					for(s = n+1 ; s < STRINGSIZE ; s++)  // after closing bracket paste to text what you sent before to textcpy_2
						text[s] = textcpy_2[s-n-1];	
						
					break;
				}
			}
		}
	}	
}



void capitalize(char text[])
{
	
	int i;
	
	text[0]=toupper(text[0]);
	
	for(i=0;i<STRINGSIZE;i++)
		if(text[i]=='\n')                	//if user press enter, capitalize the first letter.
			text[i+1]=toupper(text[i+1]);
	
	for(i=0;i<STRINGSIZE;i++)			  //if there is one of the punctuation which given below, capitalize the first letter after it.
		if(text[i] == '.' || text[i] == '!' || text[i] == '?' || text[i] == ':') 
			text[i+2] = toupper(text[i+2]);
		
}



void spelling(char text1[STRINGSIZE]) 
{
  int i, j, n;
  char textcpy[STRINGSIZE];
  
  for (i = 0; i < STRINGSIZE; i++)
  {
  	//In Turkish, the consonant between two vowels forms a syllable with the next vowel: a-ra-ba.	
    if ((check(vowel,text1[i]) == true) && (check(vowel,text1[i+2]) == true) && (check(consonant,text1[i+1]) == true)) 
	{
		
      int p;
      for (p = i + 1; p < STRINGSIZE; p++) 
        textcpy[p - i - 1] = text1[p];
	  
		
      text1[i + 1] = '-';

      for (n = i + 2; n < STRINGSIZE; n++) 
        text1[n] = textcpy[n - i - 2];
    }
    
    //If there are two consonants together, the first one forms a syllable with the vowel
	//before it while the second one forms a syllable with the vowel after it: sev-mek.
    else if((check(vowel,text1[i]) == true) && (check(consonant,text1[i+1]) == true) && (check(consonant,text1[i+2]) == true) && (check(consonant,text1[i+3]) == true) && (check(vowel,text1[i+4]) == true))
	{
	  int p;
      for (p = i + 3; p < STRINGSIZE; p++) 
        textcpy[p - i - 3] = text1[p];	  
		
      text1[i + 3] = '-';

      for (n = i + 4; n < STRINGSIZE; n++) 
        text1[n] = textcpy[n - i - 4];   
	}
	
	//If there are three consonants together, the first two of them form a syllable with
	//vowel before them, the third consonant forms a syllable with the vowel after it: kork-mak
    else if((check(vowel,text1[i]) == true) && (check(consonant,text1[i+1]) == true) && (check(consonant,text1[i+2]) == true) && (check(vowel,text1[i+3]) == true))
	{
	  int p;
      for (p = i + 2; p < STRINGSIZE; p++) 
        textcpy[p - i - 2] = text1[p];
	  
		
      text1[i + 2] = '-';

      for (n = i + 3; n < STRINGSIZE; n++) 
        text1[n] = textcpy[n - i - 3];     
	}
	
	//If there is two vowel: sa-at
	else if((check(vowel,text1[i]) == true) && (check(vowel,text1[i+1]) == true))
	{
	  int p;
      for (p = i + 1; p < STRINGSIZE; p++) 
        textcpy[p - i - 1] = text1[p];
	
      text1[i + 1] = '-';

      for (n = i + 2; n < STRINGSIZE; n++) 
        text1[n] = textcpy[n - i - 2];
	}	
	
  }
}
