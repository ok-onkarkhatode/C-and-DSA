#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


struct TREE
{
 struct TREE* left;
 int data;
 struct TREE* right;
};

struct TREE* createnode()
{
	struct TREE* newnode=NULL;
   newnode=(struct TREE*)malloc(sizeof(struct TREE));
   if(newnode == NULL)
   {
    printf("Memory is not allocated\n");
	return;
   }
   else
   {
    int a;
    printf("enter the data\n");
    scanf("%d",&a);
	newnode->data=a;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
   }
}

void insertbst(struct TREE** root)
{
  struct TREE* tempnode = NULL;
  struct TREE* travnode = *root;
  tempnode = createnode();
  if(*root == NULL)
  {
    *root=tempnode;
  }
  else
  { while(travnode != NULL)
   {
    if(tempnode->data < travnode->data)
	{
		//left side part
	  if(travnode->left == NULL)
	  {
	   travnode->left = tempnode;
	    break;
	  }
	  else
	  {
	   travnode = travnode->left;
	  }
	}
	else
	{ 
		//right side part
		if(tempnode->data >= travnode->data)
		{
			  if(travnode->right == NULL)
			  {
			   travnode->right = tempnode;
				break;
			  }
			  else
			  {
				travnode = travnode->right;
		      }
		}
	 }
    } 
   }
  }

void displaypreorderbst(struct TREE* root)
{
  if(root != NULL)
  {
   printf("%d",root ->data);
   displaypreorderbst(root ->left);
   displaypreorderbst(root ->right);
  }
}

void displayinorderbst(struct TREE* root)
{
  if(root != NULL)
  {
	displayinorderbst(root ->left);
   printf("%d",root ->data); 
   displayinorderbst(root ->right);
  }
}

void displaypostorderbst(struct TREE* root)
{
  if(root != NULL)
  {
	displaypostorderbst(root ->left);
   
   	displaypostorderbst(root ->right);

   printf("%d",root ->data); 
  }
}

int deletetree(struct TREE* root)
{
	if(root != NULL)
	{
     deletetree(root ->left);
     deletetree(root ->right); 
	 free(root);
	 return 1;
	}
}

int flag=0;
int searchelementbst(int element,struct TREE* root)
{
  if(root != NULL)
  {
   searchelementbst(element,root ->left);
   if(element == root ->data)
   {
      flag=1;
	 return flag;
   }
  }
}

void minimumelemntbst(struct TREE* root ,int *minimum)
{
	if(root != NULL)
	{
	 minimumelemntbst(root -> left,minimum);
	 if((*minimum) >root->data)
	 {
	  *minimum = root->data;
	 }
	 minimumelemntbst(root -> right,minimum);
	}
}

int countnode(struct TREE* root)
{
   static int count=0;
  if(root != NULL)
  {
   countnode(root ->left);
   countnode(root ->right);
   if(root ->data != NULL)
   {
     count++;
   }
   return count;
  }
}


int countleafnode(struct TREE* root)
{
   int count=0;
  if(root != NULL)
  {
   countnode(root ->left);
   countnode(root ->right);
   if(root ->left != NULL && root ->right != NULL)
   {
     count++;
   }
   return count;
  }
}

int main()
{   
	int choice,element,a,value;
	int* minimum = NULL;

	struct TREE* root=NULL;
   do
   {
	printf("1.insertBST\n");
	printf("2.displaypreorderBST\n");
	printf("3.displayinorderBST\n");
	printf("4.displaypostorderBST\n");
	printf("5.deleteonebyoneBST\n");
	printf("6.searchelementBST\n");
	printf("7.minimumelementBST\n");
	printf("8.maximumelementBST\n");
	printf("9.countnodeofBST\n");
	printf("10.countleafnodeofBST\n");
	printf("0.exit\n");

	printf("enter your choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:insertbst(&root);
		 printf("\n");
		break;
	case 2:displaypreorderbst(root);
		 printf("\n");
		break;
	case 3:displayinorderbst(root);
		 printf("\n");
		break;
	case 4:displaypostorderbst(root);
		 printf("\n");
		break;
    case 5:if(deletetree(root))
		   {
		    root =NULL;
		   }
		   printf("\n");
		break;
	case 6:printf("enter the search elements\n");
		   scanf("%d",&element);

		 a=searchelementbst(element,root);
		if(a == 1)
		{
		 printf("elements is in the tree \n");
		}
		else
		{
		 printf("elements not in the tree\n");
		}
		break;
	case 7:minimum=root->data;
		minimumelemntbst(root ,&minimum);
		printf("%d\n",minimum);
		break;
	case 9:value=countnode(root);
		printf("%d",value);
		break;
	case 10:value=countleafnode(root);
		  printf("%d",value);
		break;
	case 0:exit(0);
		break;
	}
   }while(choice != 0);
}
