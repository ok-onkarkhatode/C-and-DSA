/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10

struct QUEUE
{
  int a[MAX];
  int front;
  int rear;
};

int isfull(struct QUEUE* Qptr)
{
	return Qptr->rear ==(MAX -1);
}

 void insert(struct QUEUE* Qptr,int elements)
{
	(Qptr->rear)++;
	Qptr->a[Qptr->rear] = elements;
}

int isempty(struct QUEUE* Qptr)
{
  return Qptr->front == Qptr ->rear;
}

void del(struct QUEUE* Qptr)
{
  (Qptr->front)++;
  printf("delete element is %d\n",Qptr->a[Qptr->front]);
}

void display(struct QUEUE* Qptr)
{
	int i;
	//(Qptr->front)++;
	for(i=Qptr ->front+1; i <=(Qptr->rear);i++)
	{
	  printf("elements %d =>",Qptr ->a[i]);
	}
	printf("\n");
}

void main()
{
	int choice;
  int elements;
  struct QUEUE Q;  //object

  Q.front=Q.rear=-1; //set 


  do
  {
    printf("1.insert\n");
	printf("2.delete\n");
	printf("3.display\n");
	printf("0.exit\n");

	printf("enter your choice\n");
	scanf_s("%d",&choice);

	switch(choice)
	{
	case 1:
		if(isfull(&Q))
		{
		 printf("Queue is full\n");
		}
		else
		{
		 
			printf("enter the elements\n");
			scanf_s("%d",&elements);
			insert(&Q,elements);
		}
		break;
	case 2:
		if(isempty(&Q))
		{
		printf("queue is empty \n");
		}
		else
		{
		 del(&Q);
		}
		break;
	case 3:
		   if(isempty(&Q))
		   {
		     printf("is empty\n");
		   }
		   else
		   {
		    display(&Q);
		   }
		   break;
	case 0:exit(0);
		break;
	}
  }while(choice != 0);
  _getch();
}
*/

/*
//circular queue

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX 10

struct CQUEUE
{
  int a[MAX];
  int front;
  int rear;
};

int isfull(struct CQUEUE* CQptr)
{
	return (CQptr->front) ==((CQptr->rear +1)%MAX);
}
int insert(struct CQUEUE* CQptr,int elements)
{
  CQptr ->rear=(CQptr ->rear+1) % MAX;
  CQptr ->a[CQptr ->rear] = elements;
}

 int isempty(struct CQUEUE* CQptr)
 {
   return CQptr-> front == CQptr ->rear;
 }

 void del(struct CQUEUE* CQptr)
 {
   CQptr->front = (CQptr->front+1) % MAX;
  printf("delete element is %d\n",CQptr->a[CQptr->front]);
 }


 void display(struct QUEUE* CQptr)
{
	int i;
	
	for(i=(CQptr ->front)+1; i <=(CQptr->rear);i++)
	{
	  printf("elements %d =>",CQptr ->a[i]);
	}
	printf("\n");
}
void main()
{
	int choice;
	int elements;

  struct CQUEUE CQ;  //create object
   CQ.front= CQ.rear=-1; //set 

  do
  {
    printf("1.insert\n");
	printf("2.delete\n");
	printf("3.display\n");
	printf("0.exit\n");

	printf("enter your choice\n");
	scanf_s("%d",&choice);

	switch(choice)
	{
	case 1:
		if(isfull(&CQ))
		{
		 printf("Queue is full\n");
		}
		else
		{
		 
			printf("enter the elements\n");
			scanf_s("%d",&elements);
			insert(&CQ,elements);
		}
		break;
	case 2:
			if(isempty(&CQ))
		{
		printf("queue is empty \n");
		}
		else
		{
		 del(&CQ);
		}
		break;
	case 3:
		   if(isempty(&CQ))
		   {
		     printf("is empty\n");
		   }
		   else
		   {
		    display(&CQ);
		   }
		   break;
	case 0:exit(0);
		break;
	}
  }while(choice != 0);
  _getch();
}
*/


	// single queue
#include<stdio.h>
#include<stdlib.h>

	struct queue
	{
	 int data;
	 struct queue* next;
	
	};

	struct queue* createqueue()
	{
		struct queue* newnode=NULL;
	  newnode=(struct queue*)malloc(sizeof(struct queue));
	  if(newnode == NULL)
	  {
	    printf("momery is not allocated");
		return;
	  }
	  else
	  {
		  int a;
	    printf("please enter the data\n");
		scanf("%d",a);
		newnode->data=a;
		newnode->next = NULL;
		return newnode;
	  }
	}
	
	 void insert(struct queue** frontptr ,struct queue** raerptr)
	 {
	 struct queue* tempnode = NULL;
	 tempnode = createqueue();
	 
	 }
	void main()
	{
		int choice,elements;
		struct queue* front = NULL;
		struct queue* rear = NULL;
	 
		do
		{
		  printf("1. insert\n");
		  printf("2. delete\n");
		  printf("3. display\n");
		  printf("0. exit\n");

		  printf("enter your choice\n");
		  scanf("%d",&choice);

		  switch(choice)
		  {
		  case 1:printf("eneter the elements\n");
			    scanf("%d",elements);
				if(full())
				{
				  printf("queue is full\n");
				}
				else
				{
				 insert(front , rear);
				}
		  }
		}
	
	}

