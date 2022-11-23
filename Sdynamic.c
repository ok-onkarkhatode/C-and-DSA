
/*
Name: khatode onkar bhaskar
Batch: PPA-10(Evening)
Roll No: 73
*/

/*
//Q.1 Accept string from user and print using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{

	char*str=NULL;
	char ch;
	int size=1;
	int i=0;

	str=(char*)malloc(sizeof(char));

		*str='\0';
	printf("Enter the string\n");
	do
	{
	 scanf("%c",&ch);
	 if(ch != '\n')
	 {
	   size++;
	   str=(char*)realloc(str,size*sizeof(char));
	   *(str+i)=ch;
	   *(str+i+1)='\0';
	   i++;
	 }
	}while(ch !='\n');

   printf("%s",str);
	_getch();
}
*/

/*
//Q.1 Accept string from user and print using dynamic memory allocation


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0;

	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the character\n");
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	printf(" string : %s", str);
	_getch();
}
*/

/*
//Q.2 Write a C program to accept string with multiple spaces from user and print it with a sinlge space as a delimiter

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0;
	int flag = 0;

	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the character\n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	printf(" string : %s\n", str);
	
	i=0;
while(*(str+i) != '\0')
{
	while(*(str+i) == ' ')
	{
       i++;
	}

 while(*(str+i) != ' ' && *(str+i)!='\0')
 {
 printf("%c",*(str+i));

 if(*(str+i+1) == '\0')
 {
	 flag = 1;
   break;
 }
  i++;
}
 if(flag == 1)
 {
	 break;
 }
  printf(" ");
  i++;
}
 _getch();
}
 */

/*
//Q.3 Write a C program to print count of number characters in given string.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0;
	int count=0;

	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the character\n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	printf(" string : %s\n", str);

	i=0;


while(*(str + i) != '\0')
{
	while(*(str + i) == ' ')
	{
       i++;
	}  
  if(*(str + i) != ' ')
  {
  count++;
  i++;
  }
}
  printf("string count is:%d",count);
  _getch();
  }
  */

  /*
  //Q.4 Write a C program to accept string and print it in the reverse order.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0;
	
	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the \n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	printf(" string : %s\n", str);

	i=0;
   while(*(str + i) != '\0')
  {
   i++;
  }
	while(i>=0)
	{
	while(*(str + i) == ' ' && *(str + i)!='\0')
	{
       i--;
	}
	if(i>=0)
	{
       printf("%c",*(str + i));
	   if(*(str + i-1)==' ')
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
//Q.5 Write a C program to count count of number of vowels and number of consonants in the given string.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0;
	int vcount=0;
	int ccount=0;
	
	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the string:\n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	printf("string : %s", str);
	
	i=0;
	
while(*(str + i) != '\0')
{
 while(*(str + i) == ' ')
{
 i++;
 }
 if(*(str + i)=='a' || *(str + i)=='e' || *(str + i)=='i' || *(str + i)=='o' ||*(str + i)=='u')
 {
  vcount++;
  i++;
 }
 else if(*(str + i)!=' ')
 {
 ccount++;
 i++;
 }
 }
 printf("\n vowels are:%d\nconsonants are:%d\n",vcount,ccount);
 _getch();
}
*/

/*
//Q.6 Write a C program to reverse a given string as below.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0,j;
	
	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the string:\n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	  printf("string : %s\n", str);

	  i=0,j=0;
while(*(str + i) != '\0')
{
    while(*(str + i) == ' ')
  {
      i++;
  }
      while(*(str + i)!=' ' && *(str + i)!='\0')
   {
     i++;
   }
     j=i-1;
       while(*(str + j)!=' ')
    {
       if(j>=0)
       printf("%c",*(str + j));
     j--;
    }
     if(*(str+i)=='\0')
	 {
	 break;
	 }
       
       printf(" "); 
     i++;
   }
 _getch();
}
*/

/*
//Q.7 Write a C program to replace space with ‘$’ in given string.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	char* str = NULL;
	char ch;
	int size = 1;
	int i = 0,flag=0;
	
	str = (char*)malloc(sizeof(char));

	*str = '\0';
 	printf("Enter the string:\n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\n')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	
	} while (ch != '\n');
	  printf("string : %s\n", str);

	  i=0;

	  while(*(str+i)!='\0')
	  {
	    while(*(str+i)==' ')
		{
		i++;
		}
		while(*(str+i)!=' ' &&  *(str+i)!='\0')
		{
		 printf("%c",*(str+i));

		 if(*(str+i+1)=='\0')
		 {
		   flag=1;
		   break;
		 }
		 i++;
		}
		if(flag==1)
		{
		break;
		}
		printf("$");
		i++;
	  }
	  _getch();
}
*/

/*
//Q.8  Write a program which accept sentence from user and print number of words from that sentence.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0,count,wcount;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   i=0,count=0,wcount=0;
   while(*(str+i)!='\0')
   {
     count=0;
	 while(*(str+i)!=' ' && *(str+i)!='\0')
	{	
	  count++;
	  i++;
	}
	  if(count)
	 {
	   wcount++;
	 }
	  i++;
  }
	printf("total words counts:%d",wcount);
   
_getch();
}
*/

//Q.9 


/*
//Q.10 Write a C program to print all fibonacci series upto each ASCII code of aphabates in given string.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char* str = NULL;
	char ch;
	int i = 0;
	int size = 1;
	int temp1, temp2, temp3;

	str = (char*)malloc(sizeof(char));

	*str = '\0';
	printf("enter string : \n");
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	} while (ch != '\n');
			printf("%s", str);
			i = 0;
			while (*(str+i) != '\0')
			{
				temp1 = *(str + i);
				temp2 = *(str + i+1);
				temp3 = temp1 + temp2;
				printf("%d%d", temp1, temp2);
				while (temp3 <= *(str+i))
				{
					printf("%d", temp3);
					temp1 = temp2;
					temp2 = temp3;
					temp3 = temp1 + temp2;
				}
				i++;
			}
			_getch();
    }
	*/

/*
 //Q.11 Write a C program which accepts a string from user which contains a characters from ‘b’to ‘y’.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   i=0; 
while(*(str+i) != '\0')
{
	while(*(str+i)!=' ' && *(str+i)!='\0')
	{
	 if(*(str+i)>='b' && *(str+i)<='y')
	 {
	  printf("%c",*(str+i));
	 }
	  i++;
    }
}
_getch();
  }
*/

/*
//Q.12 Write a C program which accept sentence from user and print number of small letters,capital letters, Spaces and digits from that sentence.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0,count=0,scount=0,ccount=0,dcount=0; ;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   i=0,count=0,scount=0,ccount=0,dcount=0; 
while(str[i] != '\0')
{
	while(str[i]==' ')
	{
	count++;
	i++;
	}
	if(str[i]>='a' && str[i]<='z')
	{
	 scount++;
	}
	else if(str[i]>='A' && str[i]<='Z')
	{
	 ccount++;
	}
	else if(str[i]>='0' && str[i]<='9')
	{
	 dcount++;
	 
    }
	i++;
  }
printf("small letter count:%d\n",scount);
printf("capital letter count:%d\n",ccount);
printf("space count:%d\n",count);
printf("digit count:%d\n",dcount);

_getch();
  }
*/


/*
//Q.13 Write a C program which accept sentence from user and print number of white spaces from that sentence.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0,count=0;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   i=0,count=0;
  while(str[i] != '\0')
   {
	  if(str[i]==' ')
	   {
	     count++;
	   }
	   i++;
    }
   printf("white spaces are:%d",count);
   _getch();
}
*/

/*
//Q.14 Write a C program which accept sentence from user and print number of words of even and odd length from that sentence.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0,count=0,even=0,odd=0;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   int i=0,count=0,even=0,odd=0;
    while(str[i]!='\0')
  {
	  while(str[i]==' ')
	  {
	  i++;
	  }
  while(str[i]!=' ' && str[i]!='\0')
  {
   count++;
   i++;
  }
  while(count!=0)
  {
  if(count%2==0)
  {
   even++;
  }
  else //if(count%2!=0)
  {
  odd++;
  }
  i++;
  }
  }
  printf("even no %d",even++);
  printf("odd no %d",odd++);
  _getch();
}
*/

/*
//Q.15 Write a C program which accept sentence from user and print last word from that sentence.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   i = 0;
  while (*(str + i) != '\0')
  {
     i++;
  }
    while (*(str + i) != ' ' && i >= 0)
   {
     i--;
   }
   i++;
  while (*(str + i) != '\0')
   {
    printf("%c", *(str + i));
    i++;
   }
  _getch();
}*//*//Q.16 Write a C program which accept sentence from user and position from user and print the word at that position.#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   */

/*
//Q.17 Write a C program to convert the string from upper case to lower case.#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
 char*str=NULL;
  char ch;
  int size=0;
  int i=0;

 str=(char*)malloc(sizeof(char));
 *(str+i)='\0';

 printf("Enter the string\n");
 do
 {
 scanf("%c",&ch);
  if(ch!='\n')
   {
     size++;
     str=(char*)realloc(str,size*sizeof(char));
     *(str+i)=ch;
     *(str+i+1)='\0';
      i++;
   }
 }while(ch!='\n');
   printf("%s\n",str);

   i=0;
   while(*(str+i)!='\0')
   {
     // while(str[i]==' ')
     //{            
      // i++;
    // }
       if(*(str+i)>='A' && *(str+i)<='Z')
        {
          *(str+i)=*(str+i)+32;
        }
        i++;
    }
  printf("%c",*(str+i));
  _getch();
 }
 */

 /*
//Q.18 .Write a C program which toggles the case of a string. #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char* str = NULL;
char ch;
int size = 1, i = 0;

str = (char*)malloc(sizeof(char));
*(str + i) = '\0';

printf("Enter the string\n");
do
{
scanf("%c", &ch);
if (ch != '\n')
{
size++;
str = (char*)realloc(str, size * sizeof(char));
*(str + i) = ch;
*(str + i + 1) = '\0';
i++;
}
} while (ch != '\n');
 printf("%s\n", str);

 i=0;
while(*(str+i)!='\0')
  {
    if(*(str+i)>='A' && *(str+i)<='Z')
      {
         *(str+i)=*(str+i)+32;
		 i++;
       }
         else if(*(str+i)>='a'  && *(str+i)<='z')
           {
             *(str+i)=*(str+i)-32;
			 i++;
           }
		   else
		   {
	          i++;
           }
   }
  printf("%c",*(str+i));
  _getch();
 }
 */

 /*
//Q.20 Write a C program which accept string from user and copy that string into some another string.
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char* str = NULL;
	char* str2 = NULL;
	char ch;
	int size = 1;
	int i = 0;

	str = (char*)malloc(sizeof(char));
	*str = '\0';

	printf("enter string : \n");
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	} while (ch != '\n');
	printf("%s", str);
	str2 = (char*)realloc(str2, size * sizeof(char));
	i = 0;
	while (*(str+i) != '\0')
	{
		*(str2+i) = *(str+i);
		printf("%c", *(str2+i));
		i++;
	}
	_getch();
}
*/
/*
//Q.21 Write a program which accept string from user and copy first N charaters into some destination string.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char* str = NULL;
	char ch;
	int i=0;
	int size = 1;
	int n;

	str = (char*)malloc(sizeof(char));
	*str = '\0';
    printf("enter string : \n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	} while (ch != '\n');
	printf("%s", str);
	printf("position no is : \n");
	scanf("%d", &n);
	i = 0;
	while (*(str+i) != '\0')
	{
		if (i < n)
		{
			printf("%c", *(str+i));
		}
		i++;
	}
	_getch();
 }
 */

 /*
 //Q.22 .Write a C program which accept string from user and accept number N then copy last N character into some another string.

 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char* str1 = NULL;
char* str2 = NULL;
char ch;
int size = 1, i = 0, n = 0, j = 0;
str1 = (char*)malloc(sizeof(char));
*(str1 + i) = '\0';
printf("Enter the string\n");
do
{
scanf("%c", &ch);
if (ch != '\n')
{
size++;
str1 = (char*)realloc(str1, size * sizeof(char));
*(str1 + i) = ch;
*(str1 + i + 1) = '\0';
i++;
}
} while (ch != '\n');
printf("%s\n", str1);
printf("Enter  last in you want to print\n");
scanf("%d", &n);
n++;
//second string
j = 0;
str2 = (char*)malloc(n * sizeof(char));
*str2 = '\0';

i = 0;
while (*(str1 + i) != '\0')
{
i++;
}
n--; 
i = i - n;
while (*(str1+i) != '\0')
{
*(str2 + j) = *(str1 + i);
j++;
i++;
}
*(str2 + j) = '\0';
printf("%s", str2);
_getch();
}
*/

/*
//Q.23 Write a C program which accept two strings from user and append second string after first string

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char* str = NULL;
	char* str2 = NULL;
	char ch;
	int i = 0;
	int size = 1;
	int n, j = 0;

	str = (char*)malloc(sizeof(char));
	*str = '\0';
	printf("enter string : \n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	} while (ch != '\n');
	printf("%s", str);

	str2 = (char*)malloc(sizeof(char));
	*str2 = '\0';
	printf("enter second string : \n");
	do
	{
		scanf("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str2 = (char*)realloc(str2, size * sizeof(char));
			*(str2 + j) = ch;
			*(str2 + j + 1) = '\0';
			j++;
		}
	} while (ch != '\n');
	printf("%s", str2);
	printf("enter value n : \n");
	scanf("%d", &n);
	i = 0;
	j = 0;
	while (*(str+i) != '\0')
	{
		printf("%c",*(str+i));
		i++;
	}
	while (j = 0)
	{
		if (j < n)
		{
			printf("%c", *(str2 + j));
		}
		j++;
	}
	_getch();
}
*/


//Q.24 

/*
//Q.25.Write a C program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference
// between first mismatch character.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char* str1 = NULL;
char* str2 = NULL;
char ch1, ch2;
int size1 = 1, size2 = 1, i = 0, j = 0, flag = 0;
str1 = (char*)malloc(sizeof(char));
*(str1 + i) = '\0';
str2 = (char*)malloc(sizeof(char));
*(str2 + j) = '\0';
printf("Enter the first string\n");
do
{
scanf("%c", &ch1);
if (ch1 != '\n')
{
size1++;
str1 = (char*)realloc(str1, size1 * sizeof(char));
*(str1 + i) = ch1;
*(str1 + i + 1) = '\0';
i++;
}
} while (ch1 != '\n');
printf("String: ");
i = 0;
while (*(str1 + i) != '\0')
{
printf("%c", *(str1 + i));
i++;
}

printf("Enter the second string\n");
do
{
scanf_s("%c", &ch2);
if (ch2 != '\n')
{
size2++;
str2 = (char*)realloc(str2, size2 * sizeof(char));
*(str2 + j) = ch2;
*(str2 + j + 1) = '\0';
j++;
}
} while (ch2 != '\n');
printf("String: ");
j = 0;
while (*(str2 + j) != '\0')
{
printf("%c", *(str2 + j));
j++;
}
printf("\n");
i = 0;
j = 0;
while (*(str1 + i) != '\0' && *(str2 + j) != '\0')
{
if (*(str1 + i) == *(str2 + j))
{
i++;
j++;
}
else
{
if (*(str1 + i) > *(str2 + j))
{
printf("Both string are not equal and their difference is %d",
*(str1 + i) - *(str2 + j));
flag = 1;
break;
}
else
{
printf("Both string are not equal and their difference is %d",
*(str2 + j) - *(str1 + i));
flag = 1;
break;
}
}
}
if (flag == 0)
{
printf("Both string are equal ");
}
_getch();
}
*/


/*
//Q.28.Write a C program which accept string from user and then reverse the string till first N characters without taking another string.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char* str = NULL;
char ch;
int size = 1, i = 0, n = 0, diff = 0, j = 0;

str = (char*)malloc(sizeof(char));
*(str + i) = '\0';
printf("Enter the string\n");
do
{
scanf("%c", &ch);
if (ch !='\n')
{
size++;
str = (char*)realloc(str, size * sizeof(char));
*(str + i) = ch;
*(str + i + 1) = '\0';
i++;
}
} while (ch != '\n');
printf("%c",str);

i = 0;
while (*(str + i) != '\0')
{
printf("%c", *(str + i));
i++;
}
printf("Enter the value of N:\n");
scanf("%d", &n);
i = 0;
while (i < n)
{
i++;
}
j = i - 1;
while (j >= 0)
{
printf("%c", *(str + j));
j--;
}
while (*(str + i) != '\0')
{
printf("%c", *(str + i));
i++;
}
_getch();
}*//*//Q.30.Write a C program which accept string from user and reverse words from that string which are of even length.
//Input String: India is my country. I love my country.
//Output String: India si ym .yrtnuoc I evol ym . Yrtnuoc

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
char* str = NULL;
char ch;
int size = 1, i = 0, count = 0, j = 0, flag = 0;
str = (char*)malloc(sizeof(char));
*(str + i) = '\0';
printf("Enter the string\n");
do
{
scanf("%c", &ch);
if (ch != '\n')
{
size++;
str = (char*)realloc(str, size * (sizeof(char)));
*(str + i) = ch;
*(str + i + 1) = '\0';
i++;
}
} while (ch != '\n');
printf("String: ");
i = 0;
while (*(str + i) != '\0')
{
printf("%c", *(str + i));
i++;
}
printf("\n");
i = 0;
while (*(str + i) != '\0')
{
count = 0;
flag = 0;
while (*(str + i) != ' ' && *(str + i) != '\0')
{
count++;
i++;
flag = 1;
}
if (flag == 1)
{
if (count % 2 == 0)
{
j = i - 1;
while (j >= 0 && *(str + j) != ' ')
{
printf("%c", *(str + j));
j--;
}
if (*(str + i) == ' ')
{
printf(" ");
}
}
else
{
j = i - 1;
while (j >= 0 && *(str + j) != ' ')
{
j--;
}
j++;
while (*(str + j) != ' ' && *(str + j) != '\0')
{
printf("%c", *(str + j));
j++;
}
if (*(str + i) == ' ')
{
printf(" ");
}
}
}
if (*(str + i) == '\0')
{
break;
}
i++;
}
_getch();
}*//*//Q.31.Write a C program which accept string from user and check whether string is palindrome or not.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char* str = NULL;
	char ch;
	int i = 0;
	int size = 1;
	int n,j;

	str = (char*)malloc(sizeof(char));
	*str = '\0';
	printf("enter string : \n");
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	} while (ch != '\n');
	printf("%s", str);
	i = 0;
	while (*(str+i) != '\0')
	{
		n = 0;
		j = i - 1;
		i++;
	}
	while (n <= j)
	{
		if (*(str+n) != *(str+j))
			break;
		n++;
		j--;
	}
	if (n >= j)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
	_getch();
}
*/

/*
//Q.32.Write a C program to count number of alphabates, spaces and words in given string.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char* str = NULL;
	char ch;
	int i = 0;
	int size = 1;
	int space=0,alphabet=0,word=0;

	str = (char*)malloc(sizeof(char));
	*str = '\0';
	printf("enter string : \n");
	do
	{
		scanf_s("%c", &ch);
		if (ch != '\0')
		{
			size++;
			str = (char*)realloc(str, size * sizeof(char));
			*(str + i) = ch;
			*(str + i + 1) = '\0';
			i++;
		}
	} while (ch != '\n');
	printf("%s", str);
	i = 0;
	while (*(str+i) != '\0')
	{
		while (*(str+i) == ' ')
		{
			i++;
			space++;
		}
		while (*(str+i) >= 'a' && *(str+i) <= 'z' || *(str+i) >= 'A' && *(str+i) <= 'Z')
		{
			i++;
			alphabet++;
		}
		while (*(str+i) != ' ' && *(str+i) != '\0')
			i++;
		    word++;
	}
	printf("alphabet=%d\n", alphabet);
	printf("word = %d\n", word);
	printf("space = %d", space);
	_getch();
}
*/