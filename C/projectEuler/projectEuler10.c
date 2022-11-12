#include <stdio.h>

#define LIMIT 2000000

int arr[LIMIT];

int main(){
	
	long long int i = 2,j = 2,k;
	long long int sum;

	
	for(k=2;k<LIMIT;k++)
		arr[k] = 1;
		
	arr[0] = 0;
	arr[1] = 0; 
		
	while(i*i < LIMIT){
	
	j = 2;	
		while(i*j < LIMIT){
			arr[i*j] = 0;
			j++;
		}
	i++;
	}
	
	for(k=2; k< LIMIT; k++)
		if(arr[k] == 1) 
			sum += k;
			
	printf("%lld",sum);
	
	return 0;
}



	
