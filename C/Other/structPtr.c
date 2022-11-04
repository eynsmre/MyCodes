#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[30];
	int age;
};

int main()
{
	struct student *ptr;
	int n;
	
	printf("How much student are there? ");
	scanf("%d",&n);
	
	ptr=(struct student*)malloc(n*sizeof(struct student));
	
	for(int i=0;i<n;i++)
		scanf("%s%d",(ptr+i)->name,&(ptr+i)->age);
	
	for(int j=0;j<n;j++)
		printf("\n%s, %d",(ptr+j)->name,(ptr+j)->age);
		
	return 0;
}
