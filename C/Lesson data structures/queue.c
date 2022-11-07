#include <stdio.h>
//#include <>

#define SIZE 3
int queue[SIZE], front = 0, rear = 0;

void enqueue();
void dequeue();
void display();

int main(){
	
	//choice for user to enqueue, dequeue or display.
	int choice;
	again:
	printf("Enter -1 to stop.Make a choice to enque(1) or deque.(2) or display(3): ");
	scanf("%d",&choice);
	
	//If  choice is different than the options take a number again.
	if(choice!=1 && choice!=2 && choice!=-1 && choice!=3){
		printf("\nWrong value.\n");
		goto again;
	}
	
	if(choice==1){
		enqueue();
		goto again;
	}
	if(choice==2){
		dequeue();
		goto again;
	}
	if(choice==3){
		display();
		goto again;
	}
	return 0;
}

//add the value to the last of the queue
void enqueue(){
	
	if(front == rear){
	printf("The queue is fully empty. ");
	front =0;
	rear=0;
	}

	if(rear < SIZE ){
		int num;
	
		printf("Enter a number to put in: ");
		scanf("%d",&num);
		queue[rear++] = num;
	}
	else 
		printf("The queue is full.");
	
}

//delete the first number in queue and print it.
void dequeue(){
	
	
	if(front < rear){
		int first;
		first = queue[front++];
			
		printf("The %d. number of queue inside is deleted: %d\n",front, first);
	}
	else{

		printf("The queue is empty.");
	}
}

void display(){
	int i;
	printf("\nThe numbers inside queue: ");
	for(i=front;i<rear;i++)
		printf("%d, ",queue[i]);
	printf("\n\n");
}

