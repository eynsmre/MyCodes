#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct employee{
	
	char name[30];
	int age;
	
}Employee;

Employee *generateRandomAges(int n);
void orderEmployees(Employee *emp, int n);
void byebyeEmployee(Employee *emp, int n);

int main()
{
	//n= number of employees
	int n=5;
	Employee *emp=generateRandomAges(n);
	int i;
	for( i=0;i<n;i++)
		printf("\n%s %d",(emp+i)->name,(emp+i)->age);
		
	byebyeEmployee(emp, n);
	
	return 0;
	
}

Employee *generateRandomAges(int n)
{
	Employee *employees=(Employee *)malloc(sizeof(Employee) * n);
	
	srand(time(NULL));
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter %d'th employee's name: ",i);
		scanf("%s", (employees+i)->name);
		(employees+i)->age=rand()%47 + 18;
	}
	
	return employees;
}

void orderEmployees(Employee *emp, int n)
{
	int i, j, key;
	char ckey[30];
    for(i=1; i < n; i++)
    {
        key = (emp+i)->age;
		strcpy(ckey,(emp+i)->name);
        
        j = i - 1;
        while(j>=0 && (emp+j)->age > key)       
        {
            (emp+j+1)->age = (emp+j)->age;
            strcpy((emp+j+1)->name,(emp+j)->name);
            
            j-=1;
        }
        (emp+j+1)->age = key;
        strcpy((emp+j+1)->name,ckey);
    }
	
}


void byebyeEmployee(Employee *emp, int n)
{
	orderEmployees(emp,n);
	int oldest =0;
	char oldestName[30];
	int i;
	for( i=1;i<n;i++)
		if((emp+i)->age > (emp+i-1)->age)
		{
			oldest=(emp+i)->age;
			strcpy(oldestName,(emp+i)->name);
		}
	
	printf("\nUnfortunately we have to say goodbye to %s, he is %d years old",oldestName,oldest);
}
