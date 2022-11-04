#include <stdio.h>

void positiveDividers(int number);
int getNumber();

int main(){
	
	positiveDividers(number);
	
	return 0;
}

int getNumber(){

int number;

do{
printf("Lutfen pozitif bir sayi giriniz.");
scanf("%d", &number);
}while(number<0);

return number;
}

void positiveDividers(int number){
	
	int i;
	for(i=1; i<=number; i++){
		if(number%i==0){
			printf("%d \t", i);
			
			}
		
		}
	}

