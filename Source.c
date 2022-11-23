#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
 int data;
 struct node* next;
};

struct node* createnode()
{
	 int a;
	 struct node* newnode=NULL;
	 newnode=(struct node*)malloc(sizeof(struct node));

	if(newnode == NULL)
	{
	   printf("memory not allocated");
	}
	else
	{
	   printf("enter the a\n");
	   scanf_s("%d",&a);

	   newnode->data=a;
	   newnode->next=NULL;
	}
	return newnode;
}

void createLinkedList(struct node** head)
{
 struct node* tempnode=NULL;
 struct node* travnode=*head;
 tempnode=createnode();
 if(* head == NULL)
 {
  * head = tempnode; 
 }
 else
 {
   while(travnode->next != NULL)
   {
     travnode=travnode->next;
   }
   travnode->next=tempnode;
 }
}

void displayLinkedList(struct node* head)
{
  if(head == NULL)
  {
    printf("Linked List is Empty\n");
	//return NULL;
  }
  else
  {
    while( head != NULL)
	{
	 printf("%d=> ",head->data);
	 head=head->next;
	}
     printf("\n");
  }
}

//fibonacci series,factorial,1 to n addition
void ReverseLinkedList(struct node* head)
{
  if(head == NULL)
  {
    return;
  }
  else
  {
    ReverseLinkedList(head -> next);
	printf("%d =>",head ->data);
  }
}
void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
	printf("1.create Linked List\n");
	printf("2.Display Linked List\n");
	printf("3.reverse linked list\n");
	printf("0.exit(0)\n");

	printf("please enter your choice\n");
	scanf_s("%d",&choice);

	switch(choice)
	{
      case 1:createLinkedList(&first);
		break;
	  case 2:displayLinkedList(first);
		  break; 
	  case 3:ReverseLinkedList(first);
		  break;
	  case 0:exit(0);
		  break;
	}
 }while(choice != 0);
	_getch();
}