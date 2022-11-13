#include <stdio.h>
#include <stdlib.h>

#define LIMIT 2000000L

int main(){
	
	int *arr;
	long long int i = 2,j = 2,k;
	unsigned long long int sum = 0ULL;
	
	arr = calloc(LIMIT,sizeof *arr);
	
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
	
	free(arr);
	printf("%lld",sum);
	
	return 0;
}



	
