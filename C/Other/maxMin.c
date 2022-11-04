#include<stdio.h>

void minNumber(int[]); 
void maxNumber(int[]);
int avg(int[]);

  
int main()
{
    int number[5],i,maximum,minimum;
    
    
    for(i=0;i<5;i++){
    	
        printf("enter %d. number : ",i);
        scanf("%d",&number[i]);
        
    }
    
    
	float average=avg(number);
	
    minNumber(number);
    maxNumber(number);
    printf("\n average of the numbers = %f", average);
    
    return 0;
    
}

void minNumber(int number[]){
	int minimum=number[0], i;
	
	for(i=0; i<5; i++){
		
		if(number[i]<minimum){
			minimum=number[i];
		}
	}
	 printf("minimum of the numbers is: %d \n", minimum);
}

void maxNumber(int number[]){

int maximum=number[0], i;

	for(i=0; i<5; i++){
		
		if(number[i]>maximum){
			maximum=number[i];
		}
	}
	printf("maximum of the numbers is: %d ", maximum);
		
}

int avg(int number[]){
	
	int average,i;
	
	 for(i=0;i<5;i++){
     	
        average+=number[i];
        
    }
    average/=5;
    
    return average;
}



