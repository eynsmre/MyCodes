#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("PROJECT EULER 12 SOLUTION THAT I MAKE ON MY OWN. IT'S TOO SLOW. I WILL TRY TO FIND A BETTER SOLUTION.\nTrying to find the value: ");
    
    int i,k,counter;
    unsigned long int aim;
    //triangle numbers
    for(i=1;i<i+2;i++){
        aim = i*(i+1)/2;
        k = 1;
        counter = 1;
     	//printf("%ld ",aim);
        while(k<=aim/2){
        	
            if(aim%k == 0)
				counter++;
	        if(counter >= 500){
	          
	            printf("%ld",aim);
	            return 1;
			}      
       		k++;
        }
    }
    
    return 0;
}
