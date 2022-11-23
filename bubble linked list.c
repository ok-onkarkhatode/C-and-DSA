

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
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
		node->prev=NULL;
		node->next=NULL;

	}
	return (node);
}
void createlinklist(struct node** head1, struct node** head2)
{
	struct node* temp=NULL;
	temp=createnode();
	if(*head1==NULL && *head2==NULL)
	{
		*head2=temp;
		*head1=temp;
	}

	else
	{
		(*head2)->next=temp;
		temp->prev=*head2;
		*head2=temp;
	}
}

void displayforword(struct node* head)
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



void displayreverse(struct node* head)
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
			head=head->prev;
		}
		printf("NULL\n");
	}
}

void  find(struct node* head1,struct node* head2)
{
	int k;
	printf("entre the value which you want to serach\n");
	scanf("%d",&k);

	if(head1==NULL && head2 == NULL)
	{
		printf(" link list not avilable\n");
	}
	else
	{
		while(head1->data!=k && head2->data!=k && head1->prev!=head2 && head1!=head2)
		{
			head1=head1->next;
			head2=head2->prev;
		}
		if(head1->data==k || head2->data==k)
		{
			printf("Numbre is Found\n");
		}
		else
		{
			printf("numbre is not found\n");
		}
	}
}

int countnode(struct node*head1)
{
	int count=0;
	if(head1==NULL)
	{
		printf("link list is not avilable");
	}
	else
	{
		while(head1!=NULL)
		{
			count++;
			head1=head1->next;
		}
	}
	return(count);
}

void swap(struct node** head1, struct node** head2)
{
	struct node* temp = NULL;
	struct node* trans=NULL;
	trans = *head1;
	if(head1==NULL)
	{
		printf("linklist is not avilable\n");
	}
	else
	{
		while(trans!=NULL)
		{
			temp = trans->next;
			trans->next=trans->prev;
			trans->prev=trans->next;
			trans=temp;
			temp=NULL;
		}
	}
	temp = *head1;
	*head1 = *head2;
	*head2 = temp;
	temp = NULL;
}

void bubblesortLL(struct node* head1, struct node* head2)
{
	int temp;
	struct node* trans=NULL;
	struct node* temp2=NULL;
	temp2=head2;
	trans=head1;

	while(head1->next!=NULL)
	{
		while(trans!=temp2)
		{
			if((trans->data) > (trans->next->data))
			{
				temp=trans->data;
				trans->data = trans->next->data;
				trans->next->data = temp;
			}
			trans=trans->next;
		}
		temp2=temp2->prev;
		trans=head1;
		head1=head1->next;
	}
}

void insertionsortLL(struct node* head1 , struct node* head2)
{
	int empty;
	struct node* trans = NULL;

	head1=head1->next;
	while(head1!=NULL)
	{
		empty=head1->data;
		trans=head1->prev;
		while(trans!=NULL && (trans->data) > empty)
		{
			
			trans->next->data = trans->data;
			trans->data = empty;
			trans = trans->prev;
		}
		head1 = head1->next;
	}	
}
void main()
{
	int ch;
	struct node* first=NULL;
	struct node* last=NULL;
	do
	{
		printf("1. create list list\n");
		printf("2. display link list forword\n");
		printf("3. display link list reverse\n");
		printf("4. find number\n");
		printf("5. swap next and prev\n");
		printf("6. linked list using bubble sort\n");
		printf("7. linked list using insertion sort\n");
		printf("0. exit\n");

		printf("Entre your choice\n");
		scanf("%d",&ch);

		switch (ch)
		{
		case 1: createlinklist(&first,&last);
			break;
		case 2: displayforword(first);
			break;
		case 3 : displayreverse(last);
			break;
		case 4 : find(first,last);
			break;
		case 5: swap(&first,&last);
			break;
		case 6: bubblesortLL(first,last);
			break;
		case 7: insertionsortLL(first,last);
			break;
		case 0: exit(0);
			break;
		default: printf(" please entre the valid choise\n");
			break;

		}
	}while(ch!=0);

	_getch();
}