
#include<stdio.h>
#define MAX 10

struct STACK
{
  int arr[MAX];
  int top;
};

int isoverflow(int top)
{
	return top == MAX-1;
}

void push(struct STACK* stackptr , int elements)
{

   if(isoverflow(stackptr->top))
   {
     printf("stack is overflow\n");
   }
   else
   {
    (stackptr->top)++;
	stackptr->arr[stackptr ->top] = elements;
   
   }
}

int isunderflow(int top)
{
	return top == -1;
}

int pop(struct STACK* stackptr)
{
	int temp;
  if(!isunderflow (stackptr ->top))
  {
    temp = stackptr ->arr[stackptr->top];
	(stackptr ->top)--;
	return temp;
  }
  else
  {
   printf("stack is underflow\n");
   if( stackptr->top == -1)
   {
    return -1;
   }
  }
}

void display(struct STACK* stackptr)
{
 int i;
 if(!isunderflow(stackptr ->top))
 {
  for(i=0;i<= stackptr->top;i++)
  {
    printf("%d = ",stackptr->arr[i]);
  }
 }
 printf("\n");
}
void main()
{
	

  int choice;
  int elements;
  int poppedelements;

  struct STACK stack;
	stack.top = -1;

  do
  {
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.display\n");
  printf("0.exit\n");

  printf("enter your choice\n");
  scanf_s("%d",&choice);

  switch(choice)
  {
  case 1:printf("enter the elements\n");
	     scanf_s("%d",&elements);
        push(&stack,elements);
		break;
  case 2:poppedelements = pop(&stack);
       printf("popped elements is %d ", poppedelements);
	   break;
  case 3:display(&stack);
	  break;
  case 0:exit(0);
	  break;
  default : printf("enter your valid choice\n");
  }
 }while(choice != 0);
}