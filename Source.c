#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct STACK
{
  int data;
  struct STACK* next;
};

int createnode()
{
	int a;
	struct STACK* newnode=NULL;
	newnode=(struct STACK*)malloc(sizeof(struct STACK));
	if(newnode == NULL)
	{
	  printf("memory is not allocated\n");
	}
	else
	{
	  printf("enter the data a\n");
	  scanf("%d",&a);

	  newnode->data=a;
	  newnode->next = NULL;
	  return  ;
	}

}

void push(struct STACK** top,int elements)
{
  struct STACK* tempnode=createnode();

  if()



}

void pop()
{


}

void main()
{

	int choice;
	struct STACK* top=NULL;
	int elements;
	
	do
	{
	  printf("1.pop\n");
	  printf("2.push\n");
	  printf("3.dispaly\n");
	  printf("0.exit\n");
	
	 printf("Enter your choice\n");
	 scanf_s("%d",&choice);
	
	 switch(choice)
	 {
	 case 1:push(&top,elements);
		 break;
	 case 2:pop();
		 break;
	 case 3:display();
		 break;
	 case 0:exit();
		 break;
	 
	 
	 }
	}
}