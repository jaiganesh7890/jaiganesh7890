
#include<stdio.h>
#include<conio.h>
#define SIZE 100

void enQueue(int);
void deQueue();
void display();

int queue[SIZE], front = -1, rear = -1;

void main()
{
   int value, choice;
   while(1)
    {
      printf("\n....menu...\n");
      printf("1. Insertion\n2. Deletion\n3. Display");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
     case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 default:
	     printf("\nWrong selection");
      }
   }
}
void enQueue(int value)
{
   if(rear == SIZE-1)
      printf("\nQueue is Full");
   else
   {
      if(front == -1)
	 front = 0;
      rear++;
      queue[rear] = value;
      printf("\nInsertion success");
   }
}
void deQueue()
{
   if(front == rear)
      printf("\nQueue is Empty");
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
      if(front == rear)
	 front = rear = -1;
   }
}
void display()
{
   if(rear == -1)
      printf("\nQueue is Empty");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
   }
}
