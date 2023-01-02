#define true 1
#define false 0
#include<stdio.h>
#include<stdlib.h>
struct q_point
{
	int ele;
	struct q_point*n;
};
struct q_point*f_ptr=NULL;
int e_que(void);
void add_ele(int);
int rem_ele(void);
void show_ele();
void main()
{
	int ele,choice,j;
	while(1)
	{

		printf("\n\n****IMPLEMENTATION OF QUEUE USING POINTERS****\n");
		printf("======");
		printf("\n\t\t MENU\n");
		printf("=====");
		printf("\n\t[1] To insert an element");
		printf("\n\t[2]To remove an element");
		printf("\n\t[3]To display all the elements");
		printf("\n\t[4]Exit");
		printf("\n\n\t Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("\n\t Element to be inserted:");
					scanf("%d",&ele);
					add_ele(ele);
				
					break;
				}
			case 2:
				{
					if(!e_que())
					{
						j=rem_ele();
						printf("\n\t%d is removed from the queue",j);
					
					}
					else
					{
						printf("\n\t Queue is Empty");
					     
					}
					break;
				}
			case 3:
				show_ele();
			
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("\n\t Invalid choice");
			
				break;
		}
	}
}
int e_que(void)
{
	if(f_ptr==NULL)
		return true;
	return false;
}
void add_ele(int ele)
{
	struct q_point*queue=(struct q_point*)
		malloc(sizeof(struct q_point));
	queue->ele=ele;
	queue->n=NULL;
	if(f_ptr==NULL)
		f_ptr=queue;
	else
	{
		struct q_point*ptr;
		ptr=f_ptr;
		for(ptr=f_ptr;ptr->n!=NULL;ptr=ptr->n);
		ptr->n=queue;
	}
}
int rem_ele()
{
	struct q_point*queue=NULL;
	if(e_que()==false)
	{
		int j=f_ptr->ele;
		queue=f_ptr;
		f_ptr=f_ptr->n;
		free(queue);
		return j;
	}
	else
	{
		printf("\n\t queue is empty");
		return-9999;
	}
}
void show_ele()
{
	struct q_point*ptr=NULL;
	ptr=f_ptr;
	if(e_que())
	{
		printf("\n\t Queue is Empty");
		return;
	}
	else
	{
		printf("\n\t Elements present in queue are:\n\t");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->ele);
			ptr=ptr->n;
		}
	}
}

