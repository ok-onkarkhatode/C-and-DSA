//circular singly linked list

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
   *head = tempnode; 
   (*head) ->next = tempnode;
 }
 else
 {
   while(travnode->next != *head)
   {
     travnode=travnode->next;
   }
   tempnode ->next = *head;
   travnode->next=tempnode;
 }
}

void displayLinkedList(struct node* head)
{
	struct node *travnode = head;
  if(head == NULL)
  {
    printf("Linked List is Empty\n");
	//return NULL;
  }
  else
  {
	do
	{
		printf("%d =>",head ->data);
		head = head -> next;
	}while(head != travnode);

     printf("\n");
  }
}
int countnode(struct node* head)
{
  int count=0;
  while(head != NULL)
  {
    count++;
    head = head ->next;
  }
  return count;
}


void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
	printf("1.create Linked List\n");
	printf("2.Display Linked List\n");

	printf("please enter your choice\n");
	scanf_s("%d",&choice);

	switch(choice)
	{
      case 1:createLinkedList(&first);
		break;
	  case 2:displayLinkedList(first);
		  break; 
	  
	  case 0:exit(0);
		  break;
	}
 }while(choice != 0);
	_getch();
}