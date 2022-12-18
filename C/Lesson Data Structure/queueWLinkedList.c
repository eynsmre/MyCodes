#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *front = NULL, *rear = NULL;


void enqueue(int data);
void dequeue();
void display();

int main(){
	
	int choice, data;
	
	again:
	printf("Exit(-1), Enqueue(1), Dequeue(2), Display(3): ");
	scanf("%d",&choice);
	
	if(choice == 1){
	
		printf("Enter the number: ");
		scanf("%d",&data);
		enqueue(data);
		goto again;
	}
	if(choice == 2){
		dequeue();
		goto again;
	}
		
	if(choice == 3){

		display();
		goto again;
		}
	
		
	
	return 0;
}

void enqueue(int data){
	
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
	
	if(rear == NULL){			
		front = rear = temp;
		return;
	}
	
	rear->next = temp;
	rear = temp;


}

void dequeue(){
	
	int data;
	struct node *temp = front;
	
	if(front == NULL)
		return;

	data = front->data;
	front = front->next;
	
	
	printf("%d deleted.\n",data);
}

void display(){
	
	struct node *displayer = front;
	
	while(displayer){
		printf("%d\t", displayer->data);
		displayer = displayer->next;
	}
	
	printf("\n");
}
