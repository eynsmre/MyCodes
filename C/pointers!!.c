#include <stdio.h>
#include <stdlib.h>
void a(int* x);
void b(int** z);

int main(){
	
	int* x;
	int y = 3;
	x = &y;
	
	printf("%d\n",*x);
	a(x);
	printf("%d\n",y);
	printf("%d\n",*x);
	
	int *z = (int*)malloc(sizeof(int));
	b(&z);
	printf("\n%d\n",z[0]);
	printf("%d\n",z[1]);
	printf("%d\n",z[2]);
	
	return 0;
}

void a(int* y){
	//*b++;       //This one doesn't work (I think it tries to change adress value.)
	
	(*y)++;    //This is the appropriate way to use
	*y += 1;   //or this one
}

void b(int **z){
	
	(*z)[0] = 1;
	(*z)[1] = 2;
	(*z)[2] = 2;
	//*z = realloc(*z,sizeof(int)*2);  // Indirection added
	//(*z)[1] = 3;
	
}


