#include <stdio.h>

#define qSIZE 3

void enqueue(int data);
void dequeue();
void display();

int queue[qSIZE], front = 0, rear = -1;

int main(){
	
	int choice, data;
	
	again:
	printf("Exit(-1), Enqueue(1), Display(2): ");
	scanf("%d",&choice);
	
	if(choice != 1 && choice != 2 && choice !=3)
		goto again;

	if(choice == 1){
	
		printf("Enter the number: ");
		scanf("%d",&data);
		enqueue(data);
		goto again;
	}
		
	if(choice == 2){

		display();
		goto again;
	}
	
			
		
	return 0;
}

void enqueue(int data){
	
	int mod;
	rear++;
	if(rear >= qSIZE){
		dequeue();
	}
	mod = rear % qSIZE;	
	queue[mod] = data;
	
}

void dequeue(){
	
	if(rear == -1){
		printf("Queue is empty.");
		return;
	}
	
	printf("%d is deleted at %d. place\n", queue[front], front+1);
	front++;
	front = front % qSIZE;
		
}

void display(){
	
	int i;
	for(i = 0 ; i < qSIZE ; i++)
		printf("%d\t", queue[i]);
	
	printf("\n");
}
