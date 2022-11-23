

//enter array elements and print it.
/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int n,i;
int *p=NULL;

printf("how many numbers you want to \n");
scanf_s("%d",&n);

p=(int*)malloc(n*sizeof(int));
printf("enter array elemnts\n");
for(i=0;i<4;i++)
{
 scanf_s("%d",p+i);
}

printf("array elements\n");
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
free(p);
printf("");
_getch();
}
*/


/*
//asending order array

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{

int*p=NULL;	
int n,i,j,temp;

printf("how many number you want to enter\n");
scanf_s("%d",&n);

p=(int*)malloc(n*sizeof(int));

	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
	scanf_s("%d",(p+i));
	}

	printf("dispaly the array elements\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",*(p+i));
	}
	//sorting array elements
	for(i=0;i<n;i++)
	{
	 for(j=i+1;j<n;j++)
		 if(*(p+i) > *(p+j))
		 {
		  temp=*(p+i);
		  *(p+i)=*(p+j);
		 *(p+j)=temp;
		 }
		
	}
	 printf("asending order in array\n");
		 for(i=0;i<n;i++)
		 {
		 printf("%d\n",*(p+i));
	}
	_getch();
}
*/
/*
//array element second max.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i,second_max,max;
	int *p=NULL;

	printf("enter the how many array elements:\n");
	scanf_s("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	scanf_s("%d",p+i);
	}
	printf("array elemets arrays\n");
	for(i=0;i<n;i++)
	{
	printf("%d",*(p+i));
	}
	//logic second max
max=*p;
for(i=0;i<n;i++)
{
 if(*(p+i)>max)
 {
 second_max=max;
 max=*(p+i);
 }
}
printf("\n print second max= %d\n",second_max);
_getch();
}
*/

/*
//reverse array elements
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i;
	int *p=NULL;

	printf("enter the how many array elements:\n");
	scanf_s("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	scanf_s("%d",p+i);
	}
	printf("array elemets arrays\n");
	for(i=0;i<n;i++)
	{
	printf("%d",*(p+i));
	}
	//reverse logic
	for(i=n-1,i>=0;i--)
	{
	printf("%d\n",*(p+i));
	}
	_getch();
}
*/


/*
//one array into another array with dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int n,i;
	int *p=NULL;
	int *q=NULL;
	printf("enter the how many array elements:\n");
	scanf_s("%d",&n);

	p=(int*)malloc(n*sizeof(int));

	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
	scanf_s("%d",(p+i));
	}
	q=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
	 
	 *(q+i)=*(p+i);
	 // *(p+i)=*(q+i);
	}
	printf("one array into another array\n");
	for(i=0;i<n;i++)
	{
	printf("%d",*(q+i));
	}
	_getch();
  }
  */




/*
//Name=onkar bhaskar khatode
//roll no.73
//batch=PPA10
//shift=Evening

 //Q.1string program

#include<stdio.h>
#include<conio.h>
  void main()
{
	char str[10];

 printf("please enter string\n");
 scanf_s("%s",str);
 //gets(str);
 //fgets(str,sizeof(str),stdin);
 printf("%s",str);
_getch();
}
*/

/*
//Q.2write a c program to accept string with multiple spaces

#include<stdio.h>
#include<conio.h>

void main()
{
int i;
char str[100];

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\0')
{
	while(str[i] == ' ')
	{
       i++;
	}

if(str[i] != ' ')
{
printf("%c",str[i]);
i++;
}
if(str[i] == ' ')
{
 printf("%c",str[i]);
 i++;
}
}
_getch();
}
*/

/*
//Q.3write a c program to print count of a number characters in given string

#include<stdio.h>
#include<conio.h>

void main()
  {
	int count=0,i;
  char str[100];
printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\0')
{
	while(str[i] == ' ')
	{
       i++;
	}  
  if(str[i] != ' ')
  {
  count++;
  i++;
  }
}
  printf("%d",count);
  _getch();
  }
  */
  
  /*
  //Q.4 reverse string.
  
#include<stdio.h>
#include<conio.h>

void main()
{
int i;
char str[100];

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\0')
{
 i++;
}
	while(i>0)
	{
	while(str[i] == ' ' && str[i]!='0')
	{
       i--;
	}
	if(i>=0)
	{
       printf("%c",str[i]);
	   if(str[i-1]==' ')
	   {
	   printf(" ");
	   }
	   i--;
	}

	}
	
_getch();
}
*/

/*
//Q.5 vowels and consonaltes

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
   int i,vcount=0,ccount=0;

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\n')
{
 while(str[i] == ' ')
{
 i++;
 }
 if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
 {
  vcount++;
  i++;
 }
 else if(str[i]!=' ')
 {
 ccount++;
 i++;
 }
 }
 printf("%d%d",vcount,ccount);
 _getch();
}
 */ 
  
 /*
  //Q.6 reverse a string.

  #include<stdio.h>
#include<conio.h>

void main()
{
	char str[100];
   int i=0,j=0;

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\0')
{
 while(str[i] == ' ')
{
 i++;
 }
 while(str[i]!=' ' && str[i]!='\n')
 {
 i++;
 }
 j=i-1;
 while(str[j]!=' ')
 {
 if(j>=0)
 printf("%c",str[j]);
 j--;
 }
 i++;
 if(str[j+1]==' ')
 {
  printf(" "); 
 }
 }
 _getch();
}
*/

/*
//Q.7 replace spaces with $
#include<stdio.h>
#include<conio.h>

void main()
{
int i;
char str[100];

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\n')
{
	while(str[i] == ' ')
	{
       i++;
	}

if(str[i] != ' ')
{
printf("%c",str[i]);
i++;
}
if(str[i] == ' ')
{
 printf("$");
 i++;
}
}
_getch();
}
*/ 

/*
 //Q.8Write a program which accept sentence from user and print
number of words from that sentence.
Input String: India_is_my_country
Output: 4
Input String:
______India______is____my____country____
(Consider _ as space)
Output: 4*/

/*
#include<stdio.h>
#include<conio.h>

void main()
{
int i,count,wcount=0;
char str[100];

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;  
while(str[i] != '\n')
{
	//while(str[i]==' ')
	//{
	//i++;
	//}
	
	count=0;
	while(str[i]!=' ' && str[i]!='\n')
	{	
	count++;
	i++;
	}
	if(count>=1)
	{
	 wcount++;
	}
	i++;
}
	printf("%d",wcount);
	_getch();
}
 */ 
  
 /*
//Q.9   GoodName

#include<stdio.h>
#include<conio.h>

void main()
{
int i,size,count,temp;
char str[100]={"Hello"};
char str1[100];

printf("please enter string\n");
fgets(str,sizeof(str),stdin);

i=0;  
while(str[i] != '\0')
{
	while(str[i]==' ')
	{
	count=i+1;
	i++;
	}
	i++;
}
i=0;
while(str[i]!='\n')
{
 str[count]=str1[i];
 count++;
 i++;
}
i=0;
while(i<count)
{
 printf("%c",str[i]);
 i++;
}
_getch();
}
*/
__________________________________________________
  /*
// Q.12 Write a C program which accept sentence from user and
//print number of small letters, capital
//letters, Spaces and digits from that sentence.
//Eg:
//Input String: abcDE 5Glm1 O
//Output String: Small: 5 Capital: 4 Digits: 2 Spaces: 2   #include<stdio.h> #include<conio.h>  void main()  {  int i,count,scount,ccount,dcount;  char str[100];  printf("enter the string\n");  fgets(str,sizeof(str),stdin);

i=0,count=0,scount=0,ccount=0,dcount=0; 
while(str[i] != '\0')
{
	while(str[i]==' ')
	{
	count++;
	i++;
	}	if(str[i]>='a' && str[i]<='z')	{	 scount++;	}	else if(str[i]>='A' && str[i]<='Z')	{	 ccount++;	}	else if(str[i]>='0' && str[i]<='9')	{	 dcount++;	     }	i++;  }printf("small letter count:%d\n",scount);printf("capital letter count:%d\n",ccount);printf("space count:%d\n",count);printf("digit count:%d\n",dcount);_getch();  } */   /*// Q.13Write a C program which accept sentence from user and
//print number of white spaces from that sentence.
//Eg:
//Input String: India is my country
//Output: 3


 #include<stdio.h> #include<conio.h>  void main() {  int i,count=0;  char str[100];  printf("enter the string\n");  fgets(str,sizeof(str),stdin);

i=0;
while(str[i] != '\0')
{
	while(str[i]==' ')
	{
	count++;
	}
	i++;
}
	printf("white spaces are:%d",count);
	_getch();
}
*/