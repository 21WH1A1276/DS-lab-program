#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void insert();
void delete();
void display();
int front=-1,rear=-1;
int queue[maxsize];
void main()
{
	int choice;
	while(choice!=4)
	{
		printf("\n*******Main Menu*****\n");
		printf("\n======\n");
		printf("\n 1.insert an element\n 2.delete an element\n 3.display the queue\n 4.exit");
		printf("\n Enter your choice?");
		scanf("%d",&choice);
	        switch(choice)
	{	
                   case 1:
		          insert();
		          break;
                   case 2:
		          delete();
		          break;
                   case 3:
		          display();
		          break;
                   case 4:
		          exit(0);
		          break;
                   default:
		          printf("\n Enter valid choice?? \n");
	}
}
}
void insert()
{
	int item;
	printf("\n Enter the element\n");
	scanf("\%d",&item);
	if(rear==maxsize-1)
	{
		printf("\n OVERFLOW \n");
		return;
	}
	if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
	}
	else
          {
		  rear=rear+1;
	  }
	queue[rear]=item;
	printf("\n value inserted");
}
void delete()
{
	int item;
	if(front==-1||front>rear)
	{
		printf("\n UNDERFLOW \n");
		return;
	}
	else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("\n value deleted");
	}
}
void display()
{
	int i;
	if(rear==-1)
	{
		printf("\n Empty queue\n");
	}
	else
	{
		printf("\n printing values----\n");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d\n",queue[i]);
		}
	}
}



