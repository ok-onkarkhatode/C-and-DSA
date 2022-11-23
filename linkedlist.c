/*
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

void addfirst(struct node** head)
{
  struct node* tempnode = NULL;
  tempnode = createnode();
  tempnode->next=*head;
  *head=tempnode;
}

void addlast(struct node** head)
{
	createLinkedList(head);
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

void insertatposition(struct node** head)
{
  int n,pos;
  struct node* tempnode=NULL;
  struct node* travnode=*head;
  n=countnode(*head);

  printf("enter the position\n");
  scanf_s("%d",&pos);

  if(pos == 1)
  {
    addfirst(head);
  }

  else if(pos == n+1)
  {
   addlast(head);
  }

  else if(pos < 1 || pos > n+1)
  {
    printf("invalid position\n");
    insertatposition(head);
  }

  else
  {
    int i;
	 tempnode = createnode();
	for(i=1;i<pos-1;i++)
	{
		travnode=travnode->next;
	}
	tempnode->next = travnode ->next;
	travnode ->next = tempnode;
  }
}

void deleteatfirst(struct node** head)
{
  struct node* tempnode=*head;
 
  if(*head == NULL)
  {
    printf("node is not available\n");
  }
  else
  {  
     
	 *head=(*head) -> next;
	 free(tempnode);
  }
}

 void deleteatlast(struct node** head)
 {
   struct node* tempnode=*head;

   if(*head == NULL)
   {
     printf("node is not available\n");
   }
   else if((*head)->next == NULL )
   {
      free(*head);  
      (*head) -> next =NULL;
   }
   else
	   while(tempnode ->next ->next != NULL)
	   {
	     tempnode = tempnode ->next;
	   }
	    free(tempnode ->next ->next);
		tempnode ->next = NULL;
 }

 void deleteatposition(struct node** head)
 {
  struct node* temp1=*head;
   struct node* temp2=*head;
   int pos,n,i;
    n=countnode(*head);

   printf("enter the position\n");
   scanf_s("%d",&pos);

	   if(pos == 1 )
	   {
	   
	    deleteatfirst(head);
	   }
	   else if( pos == n)
	   {
	   
	    deleteatlast(head);
	   }
	   else if(pos < 1 || pos > n+1)
        {
          printf("invalid position\n");
         deleteatposition(head);  
        }

	   else
	   {
	     int i;

		 for(i=1;i<pos-1;i++)
		 {
		  temp1= temp1 ->next;
		 }
		  temp2=temp1 ->next;
	      temp1 ->next = temp2 ->next;
		  free(temp2);
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
	printf("3.addfirst Linked List\n");
	printf("4.addlastLinked List\n");
	printf("5.insert Linked List\n");
	printf("6.delete at first\n");
	printf("7.delete at last\n");
	printf("8.delete at position\n");
	printf("0.exit(0)\n");

	printf("please enter your choice\n");
	scanf_s("%d",&choice);

	switch(choice)
	{
      case 1:createLinkedList(&first);
		break;
	  case 2:displayLinkedList(first);
		  break; 
	  case 3:addfirst(&first);
		  break;
	  case 4:addlast(&first);
		  break;
	  case 5:insertatposition(&first);
		  break;
	  case 6:deleteatfirst(&first);
		  break;
	  case 7:deleteatlast(&first);
		  break;
	  case 8:deleteatposition(&first);
		  break;
	  case 0:exit(0);
		  break;
	}
 }while(choice != 0);
	_getch();
}
*/

  

  //search,reverse,replace,deleteall

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

 void search(struct node* head)
 {
   int search,flag;

   struct node* tempnode=head;

   printf("enter the element to search\n");
   scanf_s("%d",&search);
   
   flag=0;
   while(tempnode ->data == search)
   {
     flag=1;
   }
    tempnode = tempnode ->next;
	if(flag == 1)
	{
	 printf("the no is found\n");
	}
	else
	{
	 printf("the no is not found\n");
	}
 }

 void reverse(struct node*head)
 {
    struct node* tempnode=head;
	if(tempnode == NULL)
	{
	  return;
	}
	else
	{
		reverse(tempnode ->next);
		printf("%d<=",tempnode ->data);
	}
 }


 void replace(struct node** head)
 {
   int pos,i,n;
   struct node* newnode=*head;
   struct node* tempnode=*head;
   struct node* deletenode=NULL;

   printf("enter a position\n");
   scanf_s("%d",&pos);
   n=countnode(*head);
   if(tempnode == NULL)
   {
     printf("linked list not available\n");
   }
   else if(pos ==1 && n==1)
   {
	tempnode=newnode;
   }
   else if(pos < 1 || pos >n)
   {
     printf("invalid position\n");
	 replace(head);
   }
   else if(pos ==1)
   {
    newnode->next=tempnode->next;
	free(tempnode);

   }
   else
   {
    tempnode=tempnode->next;
   }
   deletenode=tempnode->next;
   newnode->next=deletenode->next;
   tempnode->next=newnode;
   free(deletenode);
 }

 void deleteall(struct node** head)
 {
	 struct node* tempnode=*head;
	 while(*head != NULL)
     {
		 tempnode=*head;
       *head=(*head)->next;
	   free(tempnode);
     }
	 printf("delete successfully\n");
 }


 void main()
{
	int choice;
	struct node* first = NULL;
	do
	{
	printf("1.create Linked List\n");
	printf("2.Display Linked List\n");
	printf("3.search the element\n");
	printf("4.reverse linked list\n");
	printf("5.replace linked list\n");
	printf("6.delete linked list\n");
	printf("0.exit(0)\n");
	
	printf("please enter your choice\n");
	scanf_s("%d",&choice);

	switch(choice)
	{
      case 1:createLinkedList(&first);
		break;
	  case 2:displayLinkedList(first);
		  break;
	  case 3:search(first);
		  break;
	  case 4:reverse(first);
		  break;
	  case 5:replace(&first);
		  break;
	  case 6:deleteall(&first);
		  break;
	  case 0:exit(0);
		  break;
	  default:printf("Invalid choice\n");
	}
 }while(choice != 0);
	_getch();
}


 


/*
 //merge

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

struct node* createnode()
{
	int a;
	struct node* newnode = NULL;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newnode == NULL)
	{
		printf("memory not allocated\n");
	}
	else
	{
		printf("enter the a \n");
		scanf_s("%d", &a);
		newnode->data = a;
		newnode->next = NULL;
	}
	return newnode;
}

void createlinkedlist(struct node** head)
{
	struct node* newnode = NULL;
	struct node* tempnode = *head;
	newnode = createnode();
	if(*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while(tempnode->next != NULL)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
}


void insertatfirst(struct node** head)
{
	  struct node* newnode = NULL;
	  newnode = createnode();
	  if(*head == NULL)
	{
		*head = newnode;
	}
	  else
	{
		newnode->next = *head;
	    *head = newnode;
    }
}

int countnode(struct node * head)
{
	int count = 0;
	while(head != NULL)
	{
		count++;
		head = head->next;
	}
	return count;
}



void displaylinkedlist(struct node* head)
{
	while(head != NULL)
	{
		printf("%d=>", head->data);
		head = head->next;
	}
	printf("\n");
}


void merge(struct node** head1, struct node** head2 , struct node** head3)
{
	int i,n,n1,n2;
	struct node* tempnode1 = *head1;
	struct node* tempnode2 = *head2;
	struct node* tempnode3 = NULL;
	struct node* newnode = NULL;
	n1 = countnode(*head1);
	n2 = countnode(*head2);
	n = n1+n2;

	if(*head1 != NULL && *head2 != NULL)
	{
		newnode = (struct node*)malloc(sizeof(struct node));
		*head3 = newnode;
		tempnode3 = *head3;
		tempnode3->data = tempnode1->data;
		tempnode3->next = NULL;

		for(i =1; i<n1; i++)
		{
			newnode = (struct node*)malloc(sizeof(struct node));
			tempnode3->next = newnode;
			tempnode3 = newnode;
			tempnode1 = tempnode1->next;
			tempnode3->data = tempnode1->data;
			tempnode3->next = NULL;
		}
		for(i =n1; i<n; i++)
		{
			newnode = (struct node*)malloc(sizeof(struct node));
			tempnode3->next = newnode;
			tempnode3 = newnode;
			tempnode3->data = tempnode2->data;
			tempnode2 = tempnode2->next;
			tempnode3->next = NULL;
		}
		displaylinkedlist(*head3);
	}
	else
	{
		printf("merge operation not works\n");
	}
}

void main()
{
	int choice;
	struct node* first = NULL;
	struct node* second = NULL;
	struct node* third = NULL;

	do
	{
	printf("1. create linkedlist()\n");
	printf("2. create second linkedlist()\n");
	printf("3. display first linkedlist()\n");
	printf("4. display second linkedlist()\n");
	printf("5.merge both linkedlist()\n");
	printf("please enter your choice\n");
	scanf_s("%d", &choice);

		switch(choice)
		{
		case 1: createlinkedlist(&first);
			break;
		case 2: createlinkedlist(&second);
			break;
		case 3: displaylinkedlist(first);
			break;
		case 4: displaylinkedlist(second);
			break;
		case 5: merge(&first, &second,&third);
			break;
		case 0: printf("exit\n");
			break;
		default: printf("invalid choice\n");
		}
	}
	while(choice != NULL);
	_getch();
}
*/