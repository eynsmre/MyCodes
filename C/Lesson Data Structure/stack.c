#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10
int stack[SIZE];
int top = -1;

void push();
int pop();
void print();

bool isEmpty();
bool isFull();


int main(){
	int choice;
	

	printf(" 1 = Push\n 2 = See the last number in.\n 3 = Full pop and list stack\n-1 = Stop\n\n");
	again:
	printf(" Choice: ");
	scanf("%d",&choice);
	
	if(choice != 1 && choice != 2 && choice != 3 && choice != -1){
		printf("Wrong value.");
		goto again;
	}
	if(choice == 1){
		push();
		goto again;
	}
	if(choice == 2){
		printf("\n %d popped.\n\n",pop());
		goto again;
	}
	if(choice == 3){
		print();
	}
	return 0;
}

bool isFull(){
	if(top==SIZE-1){
		printf("The stack is full. You can't push. \n");
		return true;
	}
	return false;
}

bool isEmpty(){
	if(top == -1){
		printf("The stack is empty. You can't pop");
		return true;
	}
	return false;
}

void push(){	
	if(isFull() == false){
		int x;
		printf("\n Enter the value you want to push: ");
		scanf("%d",&x);
		stack[++top] = x;
	}
}

int pop(){
	if(isEmpty() == false)
		return stack[top--];
}

void print(){
	int i;
	while(top>=0)
		printf("%d, ",pop());
}
