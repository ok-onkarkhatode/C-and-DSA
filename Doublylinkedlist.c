#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
 struct node* prev;
 int data;
 struct node* next;
};

struct node* createnode()
{
	int a;
	struct node* newnode=NULL;
  newnode=(struct node*) malloc(sizeof(struct node));
  if(newnode == NULL)
  {
    printf("Memory is not allocated\n");
  }
  else
  {
   printf("enter the a \n");
   scanf_s("%d",&a);
   newnode -> data = a;
  newnode->prev = NULL;
  newnode -> next = NULL;
  }
  return newnode;
}

void createlinkedlist(struct node** head1, struct node** head2 )
{
  struct node* tempnode=NULL;
  tempnode=createnode();
  if(*head1 == NULL)
  {
   *head1 = tempnode;
	*head2 = tempnode;
  }
  else
  {
    tempnode->prev= *head2;
	(*head2)->next= tempnode;
	(*head2) = tempnode;
  }
}

void displayforward(struct node* head1)
{
 if(head1 == NULL)
 {
   printf("the linked list is empty\n");
   //return NULL;
 }
 else
 {
  while(head1 != NULL)
  {
    printf("%d=> ",head1 ->data);
    head1 = head1->next;
  }
   printf("\n");
 }
}

void displaybackward(struct node* head)
{
  if( head == NULL)
  {
   printf("Linked list is not created\n");
  }
  else
  {
   while( head != NULL)
   {
     printf("%d=>", head ->data);
	 head = head -> prev;
   }
   printf("\n");
  }
}

 void insertatlast(struct node** head1,struct node** head2)
 {
  createlinkedlist(head1, head2);
 }

  void insertatfirst(struct node** head1,struct node** head2)
  {
   struct node* tempnode=createnode();

   if(*head1 == NULL && *head2 == NULL)
   {
     *head1 = tempnode;
	 *head2 = tempnode;
   }
   else
   {
	
     tempnode->next =*head1;
	 (*head1)->prev = tempnode;
	 *head1 = tempnode;
   }	   
  }

  int countnode(struct node* head1)
  {
	int count=0;
	if(head1 == NULL)
	{
	 printf("linked list not available\n");
	}
	else
	{
		while(head1 != NULL)
		{
		 count++;
		 head1=head1 ->next;
		}
	}
  }

 void insertatposition(struct node** head1, struct node** head2)
  {
	int n=0;
	int pos=0;
	int i;

	struct node* temp=NULL;
	struct node* trav=*head1;

   printf("enter the position\n");
   scanf_s("%d",&pos);
   n=countnode(*head1);
  
   if(pos == 1)
   {
    insertatfirst(head1,head2);
   }
   else if(pos == n+1)
   {
    insertatlast( head1, head2);
   }
   else if(pos > n+1 || pos < 1)
   {
    printf("enter the valid position\n");
	insertatposition( head1, head2);
   }
   else
   {
    temp=createnode(); 

	for(i=1;i<pos;i++)
	{
	  trav=trav ->next;
	}
	temp ->next=trav;
	temp->prev=trav->prev;
    trav->prev->next=temp;
	trav->prev=temp;
   }
  }

 void deleteatfirst(struct node** head1,struct node** head2)
 {
   if(*head1 == NULL && *head2==NULL)
   {
    printf("node is not available\n");
   }
   else if(*head1 == *head2)
   {
    free(*head1);
	*head1 = NULL;
	*head2 = NULL;
   }
   else
   {
    *head1=(*head1)->next;
	free(*head1);
	(*head1) -> prev = NULL;
   }
 }

 void deleteatlast(struct node** head1,struct node** head2)
 {
	if(*head1 == NULL && *head2 == NULL)
	{
	 printf("node is not available\n");
	}
	else if(*head1 == *head2)
	{
	 free(*head2);
	 *head1=NULL;
	 *head2=NULL;
	}
	else
	{
	 *head2=(*head2) ->prev;
	 free((*head2) ->next);
	 (*head2) ->next=NULL;
	}
 }

 void deleteatposition(struct node** head1,struct node** head2)
 {
	 int pos;
	 int i=0;
	 int n;
  struct node* trav=NULL;
  printf("enter the position\n");
  scanf_s("%d",&pos);
  n=countnode(*head1);

   if(pos == 1)
   {
    deleteatfirst(head1,head2);
   }
   else if(pos == n+1)
   {
    deleteatlast( head1, head2);
   }
   else if(pos > n+1 || pos < 1)
   {
    printf("enter the valid position\n");
	deleteatposition( head1, head2);
   }
   else
   {
    trav=*head1;
	for(i=1;i<pos;i++)
	{
	 trav=trav->next;
	}
	trav->prev->next=trav->next;
	trav->next->prev=trav->prev;
	free(trav);
   }
 }

void main()
{
 int choice;
 struct node* first = NULL;
 struct node* last = NULL;
 do
 {
    printf("1.create linked list\n");
    printf("2.display linked list forward\n");
    printf("3.display linked list backword\n");
	printf("4.insert at last\n");
	printf("5.insert at first\n");
	printf("6.insert at position\n");
	printf("7.delete at first\n");
	printf("8.delete at last\n");
	printf("9.delete at position\n");
    printf("0.Exit\n");

    printf("enter your choice\n");
    scanf_s("%d",&choice);

    switch(choice)
    {
      case 1:createlinkedlist(&first,&last);
	    break;
      case 2:displayforward(first);
	    break;
	  case 3:displaybackward(last);
		  break;
	  case 4:insertatlast(&first,&last);
		  break;
	  case 5:insertatfirst(&first,&last);
		  break;
	  case 6: insertatposition(&first,&last);
		  break;
	  case 7: deleteatfirst(&first,&last);
		  break;
	  case 8:deleteatlast(&first,&last);
		  break;
	  case 9:deleteatposition(&first,&last);
		  break;
      case 0:exit(0);
	    break;
    }

}while(choice !=0);
}