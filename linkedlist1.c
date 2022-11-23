/*
// sorting algorithm

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
	struct node* node=NULL;

	node=(struct node*)malloc(sizeof(struct node));

	if(node==NULL)
	{
		printf("node is not created\n");
	}
	else
	{
		printf("entre the a \n");
		scanf_s("%d",&a);

		node->data=a;
		node->next=NULL;

	}
	return (node);
}
void createlinkedlist(struct node** head)
{
	struct node* trans =*head;

	struct node*temp=createnode();

	if(*head==NULL)
	{
		*head=temp;
	}

	else
	{
		while(trans->next!=NULL)
		{
			trans=trans->next;
		}
		trans->next=temp;
	}
}

void display(struct node* head)
{
	if(head==NULL)
	{
		printf(" link list is not avilable\n");
	}
	else
	{
		while(head!=NULL)
		{
			printf("%d\t=>",head->data);
			head=head->next;
		}
		printf("NULL\n");
	}
}

void sort(struct node** head)
{
	struct node* temp1=*head;
	struct node* temp2=*head;
	int temp;
	if(*head==NULL)
	{
		printf(" linklist is not created\n");
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp2=temp1->next;
			while(temp2!=NULL)
			{
				if(temp1->data > temp2->data)
				{
					temp = temp1->data;
					temp1->data = temp2->data;
					temp2->data = temp;
				}
				temp2=temp2->next;
			}
			temp1=temp1->next;
		}
	}
	printf("sorting is done\n");
}


void main()
{
	int ch;
	struct node* first=NULL;
	do
	{
		printf("1. create list list\n");
		printf("2. display lisk list\n");
		printf("3. sort a link list\n");
		printf("4. exit\n");
		printf("Entre your choice\n");
		scanf_s("%d",&ch);

		switch (ch)
		{
		case 1: createlinkedlist(&first);
			break;
		case 2: display(first);
			break;
		case 3: sort(&first);
			break;
		case 4: exit(0);
			break;
		default: printf(" entre the your choice\n");
			break;

		}
	}while(ch!=0);

	_getch();
}
*/

/*
// string length	

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	char a[100];
	struct node* next;
};

struct node* createnode()
{
	int t=0;
	int k=0;
	char c[100];
	struct node* newnode = NULL;
	newnode= (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("node is not created\n");
	}
	else
	{
		printf("Enter the string\n");
		scanf(" ");
		fgets(c,sizeof(c),stdin);
		
		k=0;
		while(c[k]!='\0')
		{
			newnode->a[k]=c[k];
			k++;
		}
		newnode->next = NULL;
		return(newnode);
	}

}

void createlinklist(struct node** head)
{
	struct node* trans =*head;

	struct node*temp=createnode();

	if(*head==NULL)
	{
		*head=temp;
	}

	else
	{
		while(trans->next!=NULL)
		{
			trans=trans->next;
		}
		trans->next=temp;
	}
}

void display(struct node* head)
{
	int k=0;
	if(head==NULL)
	{
		printf(" link list is not avilable\n");
	}
	else
	{
		while(head!=NULL)
		{
			while(head->a[k]!='\n' && head->a[k]!='\0')
			{
				printf("%c",head->a[k]);
				k++;
			}
			printf(" size is %d\n",k);
			k=0;
			head=head->next;
		}
	}
}


void main()
{
	int k=0;
	int ch;
	struct node* first=NULL;
	do
	{
		printf("1. create list list\n");
		printf("2. display lisk list\n");
		printf("3. exit\n");
		printf("Entre your choice\n");
		scanf("%d",&ch);

		switch (ch)
		{
		case 1: createlinklist(&first);
			break;
		case 2: display(first);
			break;
		case 3: exit(0);
	
		default: printf(" please entre the valid choise\n");
			break;
		}
	}while(ch!=0);

	_getch();
}
 */


/*
//Asending and descending

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
	int val;
	struct node* node=NULL;

	node=(struct node*)malloc(sizeof(struct node));

	if(node==NULL)
	{
		printf("node is not created\n");
	}
	else
	{
		printf("node is created then entre the value \n");
		scanf("%d",&val);

		node->data=val;
		node->next=NULL;

	}
	return (node);
}
void createlinkedlist(struct node** head)
{
	struct node* trans =*head;

	struct node*temp=createnode();

	if(*head==NULL)
	{
		*head=temp;
	}

	else
	{
		while(trans->next!=NULL)
		{
			trans=trans->next;
		}
		trans->next=temp;
	}
}

int countnode(struct node *head)
{
	int count=1;
	while(head!=NULL)
	{
		head=head->next;
		count++;
	}
	return(count);

}
void sortasendiing(struct node** head)
{
	struct node* temp1=*head;
	struct node* temp2=*head;
	int t;
	if(*head==NULL)
	{
		printf(" linklist is not created\n");
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp2=temp1->next;
			while(temp2!=NULL)
			{
				if(temp1->data > temp2->data)
				{
					t = temp1->data;
					temp1->data = temp2->data;
					temp2->data = t;
				}
				temp2=temp2->next;
			}
			temp1=temp1->next;
		}
	}
}

void sortdesendiing(struct node** head)
{
	struct node* temp1=*head;
	struct node* temp2=*head;
	int t;
	if(*head==NULL)
	{
		printf(" linklist is not created\n");
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp2=temp1->next;
			while(temp2!=NULL)
			{
				if(temp1->data < temp2->data)
				{
					t = temp1->data;
					temp1->data = temp2->data;
					temp2->data = t;
				}
				temp2=temp2->next;
			}
			temp1=temp1->next;
		}
	}
}


void displaysort(struct node**  head1, struct node** head2)
{
	int i;
	int u=0;
	int v=0;
	struct node* temp1 = *head1;
	struct node* temp2 = *head2;
	
	sortasendiing(head1);
	sortdesendiing(head2);

	u=countnode(*head1);
	v=countnode(*head2);
	
	for(i=1;i<=u/2;i++)
	{
		printf("%d\t=>",temp1->data);
		temp1=temp1->next;
	}
	for(i=1;i<=v/2;i++)
	{
		printf("%d\t=>",temp2->data);
		temp2=temp2->next;
	}
}

void display(struct node* head)
{
	if(head==NULL)
	{
		printf(" link list is not avilable\n");
	}
	else
	{
		while(head!=NULL)
		{
			printf("%d\t=>",head->data);
			head=head->next;
		}
		printf("NULL\n");
	}
}

void main()
{
	int ch;
	struct node* first=NULL;
	struct node* second=NULL;
	do
	{
		printf("1. create first lint list\n");
		printf("2. display first link list\n");
		printf("3. create second list list\n");
		printf("4. display second lisk list\n");
		printf("5. display first in asending and second is by desending \n");
		printf("6. exit\n");
		printf("entre your choise\n");
		scanf("%d",&ch);
		switch (ch)
		{
		case 1: createlinkedlist(&first);
			break;
		case 2: display(first);
			break;
		case 3: createlinkedlist(&second);
			break;
		case 4: display(second);
			break;
		case 5: displaysort(&first,&second);
			break;
		case 6: exit(0);
	
		default: printf(" please entre the valid choise\n");
			break;
		}
	}while(ch!=0);

	_getch();
}
*/


/*
//5 student percentages	

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
	char name[15];
	int roll;
	float percent;
};
struct node
{
	struct student data;
	struct node* next;

};


struct node* createnode()
{
	int r=0;
	int k=0;
	float per;
	char c[100];
	struct node* newnode = NULL;
	newnode= (struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("node is not created\n");
	}
	else
	{
		printf("Entre student name\n");
		scanf(" ");
		fgets(c,sizeof(c),stdin);
		
		k=0;
		while(c[k]!='\0')
		{
			newnode->data.name[k]=c[k];
			k++;
		}

		printf("Entre student roll no.\n");
		scanf("%d",&r);
		newnode->data.roll=r;

		printf("Entre student percentage\n");
		scanf("%f",&per);
		newnode->data.percent=per;

		newnode->next = NULL;
		return(newnode);
	}

}

void createlinkedlist(struct node** head)
{
	struct node* trans =*head;

	struct node*temp=createnode();

	if(*head==NULL)
	{
		*head=temp;
	}

	else
	{
		while(trans->next!=NULL)
		{
			trans=trans->next;
		}
		trans->next=temp;
	}
}

void display(struct node* head)
{
	int k=0;
	if(head==NULL)
	{
		printf(" link list is not avilable\n");
	}
	else
	{
		while(head!=NULL)
		{
			
			while(head->data.name[k]!='\n' && head->data.name[k]!='\0')
				{
					printf("%c",head->data.name[k]);
					k++;
				}
				k=0;
				printf("roll no=> %d",head->data.roll);
				printf("percentage=> %f\n",head->data.percent);
				head=head->next;

		}

	}
}

void sort(struct node** head)
{
	struct node* temp1=*head;
	struct node* temp2=*head;
	struct student temp;

	if(*head==NULL)
	{
		printf(" linklist is not created\n");
	}
	else
	{
		while(temp1->next!=NULL)
		{
			temp2=temp1->next;
			while(temp2!=NULL)
			{
				if(temp1->data.percent > temp2->data.percent)
				{

					temp = temp1->data;
					temp1->data = temp2->data;
					temp2->data = temp;

				}
				temp2=temp2->next;
			}
			temp1=temp1->next;
		}
	}
	printf("sorting is done\n");
}


void main()
{
	int ch;
	struct node* first=NULL;
	do
	{
		printf("1. create list list\n");
		printf("2. display lisk list\n");
		printf("3. sort a link list\n");
		printf("4. exit\n");
		printf("Entre your choice\n");
		scanf_s("%d",&ch);

		switch (ch)
		{
		case 1: createlinkedlist(&first);
			break;
		case 2: display(first);
			break;
		case 3: sort(&first);
			break;
		case 4: exit(0);
			break;
		default: printf(" please entre the valid choice\n");
			break;

		}
	}while(ch!=0);

	_getch();
}
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct node
{
char data[10];
struct node* next;
};

struct node* createnode()
{
char a[10];
struct node* newnode = NULL;
newnode = (struct node*)malloc(sizeof(struct node));
if (newnode == NULL)
{
printf("Memory is not allocated..\n");
return;
}
else
{
printf("Enter the data: ");
scanf_s(" ");

gets(a, sizeof(a), stdin);
strcpy(newnode->data, a);

newnode->next = NULL;
return newnode;
}
}
createlinkedlist(struct node** head)
{
struct node* tempnode;
struct node* travnode = *head;
tempnode = createnode();
if (*head == NULL)
{
*head = tempnode;
}
else
{
while (travnode->next != NULL)
{
travnode = travnode->next;
}
travnode->next = tempnode;
}
}

displaylinkedlist(struct node* head)
{
int length;
if (head == NULL)
{
printf("Linked list list not created\n");
}
else
{
while (head != NULL)
{
length = strlen(head->data);
printf("%s=> (length %d)", (head->data), length - 1);
head = head->next;
}
//printf("\n");
}
}
void main()
{
struct node* first = NULL;
int choice;
do
{
printf("1.Create linked list.\n");
printf("2.Display linked list.\n");
printf("0.exit.\n");
printf("Enter the choice.\n");
scanf_s("%d", &choice);
switch (choice)
{
case 1:createlinkedlist(&first);
break;
case 2:displaylinkedlist(first);
break;
case 0:exit(0);
break;
default:printf("Enter the valid choice");
}

} while (choice != 0);
_getch();
}