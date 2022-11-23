
//Q.10 Write a C program to print all fibonacci series upto eachASCII code of aphabates in given string.
#include<stdio.h>
#include<conio.h>
void main()
{
 char str[100];
 int i,n,j;
 int temp1,temp2,temp3;

 printf("enter the character the fibonacci series\n");
 fgets(str,sizeof(str),stdin);
 
 i=0;
 while(str[i]!='\0')
 {
  temp1=0;
 temp2=1;
 temp3=temp1+temp2;
 printf("%d%d",temp1,temp2);
 while(temp3<=str[i])
 {
 printf("%d",temp3);
 temp1=temp2;
 temp2=temp3;
 temp3=temp1+temp2;
 }
 i++;
 }
 _getch();
}



//Q.11 contains character b to y.
#include<stdio.h>
 #include<conio.h>
  void main()
  {
  int i;
  char str[100];

  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);

i=0; 
while(str[i] != '\n')
{
	if(str[i]>='b' && str[i]<='y')
	{
	printf("%c",str[i]);
	}
}
_getch();
  }



//Q.12 Write a C program which accept sentence from user andprint number of small letters, capitalletters, Spaces and digits from that sentence.
#include<stdio.h>
 #include<conio.h>
  void main()
  {
  int i,count,scount,ccount,dcount;
  char str[100];

  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);

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
 


//Q.13  print white spaces in the sentence.

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



//Q.14 count even and odd length from that sentences.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,count=0,even=0,odd=0;
 char str[100];

  printf("enter the string\n");  fgets(str,sizeof(str),stdin);

  while(str[i]!='\n')
  {
	  while(str[i]==' ')
	  {
	  i++;
	  }
  while(str[i]!=' ' && str[i]!='\n')
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
 


//Q.15 print last word of the sentence.

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=0,j=0;
 char str[100];

  printf("enter the string\n");  fgets(str,sizeof(str),stdin);

  while(str[i]!='\n')
  {
	  while(str[i]==' ')
	  {
	  i++;
	  }
    j=i;
	while(str[j]!=' ')
  {
    j--;
  }
  while(str[j]!='\n')
  {
   while(str[j]==' ')
  {
    j++;
  }
   printf("%c",str[j]);
   j++;
  }
  break;
  }
  _getch();
  }

  
  

  //Q.16 position from word

#include<stdio.h>
#include<conio.h>
void main()
{
char str[50];
int i = 0, cnt = 0;
int pw; 
printf("enter a string : ");
fgets(str , sizeof(str) , stdin);
printf("enter position of word which you want : ");
scanf("%d",&pw);
while(str[i] != '\0')
{
while(str[i] == ' ')
{
i++;
}
if(str[i] != ' ' && str[i] != '\n')
{
cnt++;
}
while(str[i] != ' ' && str[i] != '\0')
{

if(pw == cnt)
{
printf("%c",str[i]);
}
i++;
}
}
if(pw > cnt)
printf("given string contains only %d words",cnt);
getch();
}
 
 

 //Q.17 upper case to lower case.
 #include<stdio.h>
#include<conio.h>
void main()
{
int i;
char str[100];

printf("enter the string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i]!='\n')
{
while(str[i]==' ')
{
i++;
}
if(str[i]!='A' && str[i]!='Z')
{
str[i]=str[i]+32;
}
i++;
}

 printf("%c",str[i]);
 _getch();
 }
 
 
 //Q.18 Write a C program which toggles the case of a string.

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char str[100];

printf("enter the string\n");
fgets(str,sizeof(str),stdin);

i=0;
while(str[i]!='\n')
{
while(str[i]==' ')
{
i++;
}
if(str[i]!='A' && str[i]!='Z')
{
str[i]=str[i]+32;
}
else if(str[i]!='a'  && str[i]!='z')
{
str[i]=str[i]-32;
}
i++;
}
 printf("%c",str[i]);
 _getch();
 }
 

 /*
 #include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0,wcount=0;
char str[100];

printf("enter the string\n");
fgets(str,sizeof(str),stdin);

printf("enter a position:");
scanf_s("%d",&n);

i=0;
while(str[i]!='\n')
{
while(str[i]==' ')
{
i++;
}
while(str[i]!=' ' && str[i]!='\n')
{
count++;
i++;
}
if(count>=1)
{
wcount++;
}
 }
n=wcount;
printf("%s",str[i]);
 _getch();
 }
 */
 
 //Q.20 Write a C program which accept string from user and copythat string into some another string.
#include<stdio.h>
#include<conio.h>
void main()
 {
 char str[100];
 char b[100];
 int i=0;
 
 printf("enter the string\n");
 fgets(str,sizeof(str),stdin);

 while(str[i]!='\n')
 {
 b[i]=str[i];
 printf("%c",b[i]);
 i++;
 }
 _getch();
 }
 

 
 
 //Q.21 Write a program which accept string from user and copy first N charaters into some destination string.

#include<stdio.h>
#include<conio.h>
 void main()
 {
 char a[100],b[100];
 int i,j,n,count=0;;

 printf("enter the string\n");
 fgets(a,sizeof(a),stdin);

 printf("enter the n no\n");
 scanf("%d",&n);

 i=0;
 count=0;
 while(a[i]!='\n')
 {
 count++;
 i++;
 }
 if(n<=count)
 {
 while(i<=n)
 {
 printf("%c",a[i]);
 i++;
 } 
 }
 else
 {
 printf("\n inavalid number:");
 }
 _getch();
 }
 
//Q.22 Write a C program which accept string from user and accept number N then copy last N character into some another string.

#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100];
char str2[100];
int i, n, j, flag = 0, count = 0;

printf("Enter the string\n");
fgets(str1, sizeof(str1), stdin);
printf("String: %s", str1);

printf("copy the character into another string from which position\n");
scanf("%d", &n);
i = 0;

while (str1[i] != '\n')
{
i++;
count++;
}

j = 0;
i = count - n;
while (str1[i] != '\n')
{
str2[j] = str1[i];
i++;
j++;
}
str2[j] = '\0';
i = 0;
while (str2[i] != '\0')
{
printf("%c", str2[i]);
i++;
}
_getch();
} 
 
//Q.22.Write a C program which accept string from user and accept number N then copy last Ncharacter into some another string.
//Input String: India is my country
//Input of N: 5
//Output String: is my
#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100];
char str2[100];
int i, n, j, flag = 0, count = 0;
printf("Enter the string\n");
fgets(str1, sizeof(str1), stdin);
printf("String: %s", str1);
printf("copy the character into another string from which position\n");
scanf_s("%d", &n);
i = 0;
while (str1[i] != '\n')
{
i++;
count++;
}
j = 0;
i = count - n;
while (str1[i] != '\n')
{
str2[j] = str1[i];
i++;
j++;
}
str2[j] = '\0';
i = 0;
while (str2[i] != '\0')
{
printf("%c", str2[i]);
i++;
}
_getch();
} 
 
 //Q.23 Write a C program which accept two strings from user and append second string after first string.

#include<stdio.h>
#include<conio.h>
void main()
 {
 char str[100];
 char str1[100];
 int i,j=0;

printf("enter the string\n");
fgets(str,sizeof(str),stdin);
printf("enter the string\n");
fgets(str1,sizeof(str1),stdin);

i=0;
while(str[i]!='\n')
{
	i++;
}
	while(str1[j]!='\n')
	{
	str[i]=str1[j];
	i++;
	j++;
	}
	j=0;
	while(j<i)
	{
	 printf("%c",str1[j]);
	 j++;
	}
	_getch();
}
 


 
 //Q.24 Write a C program which accept two strings from user and append N characters of second string after first string.

 #include<stdio.h>
#include<conio.h>
void main()
{
char str[100],str1[100];
int i,count,j,num;

printf("\nEnterFirststring:");
fgets(str,sizeof(str),stdin);
printf("\nEnterSecondstring:");
fgets(str1,sizeof(str1),stdin);

printf("\nEnteranumber:");
scanf("%d",&num); 
i=0;
while(str[i]!='\n')
{
count=i;
i++;
} 
j=0;
while(str1[j]!='\n')
{
str[i]=str1[j];
i++;
j++;
} 
if(j>=num)
{
i=0;
num=num+count;
while(i<=num)
{
printf("%c",str[i]);
i++;
} 
} 
else
{
printf("\nsecond%dcharacter",j);
} 
_getch();
} 

//Q.25 Write a C program which accept two strings from user and compare two strings.If both strings are equal then return 0 otherwise return difference between first mismatchcharacter.

#include<stdio.h>
#include<conio.h>
void main()
{
char str1[100];
char str2[100];
int i, j, flag = 1;

printf("Enter the first string\n");
fgets(str1, sizeof(str1), stdin);
printf("String str1: %s", str1);

printf("Enter the second string\n");
fgets(str2, sizeof(str2), stdin);
printf("String str1: %s", str2);
i = 0;
j = 0;

while (str1[i] != '\n' || str2[j] != '\n')
{
if (str1[i] == str2[j])
{
i++;
j++;
}
else
{
if (str1[i] > str2[j])
{
printf("Both string are not equal and difference is %d", str1[i] -str2[j]);
}
else
{
printf("Both string are not equal and difference is %d", str2[j] -str1[i]);
}
flag = 0;
break;
}
}
if (flag == 1)
{
printf("Both string are equal 0");
}
_getch();
}//Q.26 Input String1: Ramayan
//Input String2: Ramanacharya
//Input of N: 4
//Output: Both strings are equal.#include<stdio.h>
#include<conio.h>
void main()
{
char str1[20] , str2[20];
int i = 0 , n;
int cnt1 = 0 ,cnt2 = 0 , cnt = 0 , min;
printf("enter a 1st string : ");
fgets(str1 , sizeof(str1) , stdin);
printf("enter a 2nd string : ");

fgets(str2 , sizeof(str2) , stdin);
printf("enter n th position : ");
scanf("%d",&n);
for(i = 0 ; str1[i] != '\n' ; i++)
{
cnt1++;
}
for(i = 0 ; str2[i] != '\n' ; i++)
{
cnt2++;
}
if(cnt1 > cnt2)
min = cnt2;
else
min = cnt1;
if(n > min)
printf("you can check char only %d positions",min);

else
{
for(i = 0 ; i < n ; i++)
{
if(str1[i] == str2[i])
cnt++;
}
if(i == cnt)
printf("both strings are equal");
else
{
i = 0;
cnt2 = 0;while(str1[i] == str2[i])
{
cnt2++;
i++;
}
i = str1[cnt2] - str2[cnt2]; //diff bet first mismatch char
printf("difference between first mismatch char %c and %c is %d",str1[cnt2],str2[cnt2],i);
}
}
_getch();
}//Q.27 Write a C program which accept two strings from user and compare two strings without case sensitivity.

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],str1[100];
int i=0,j=0,flag=0;
printf("enter a first string\n");
fgets(str,sizeof(str),stdin);

printf("enter a second string\n");
fgets(str1,sizeof(str1),stdin);

while(str[i]!='\0'&&str1[i]!='\n')
{
i++;
}
while(j<=i)
{
if(str[j]>=65&&str[j]<=90)
str[j]=str[j]+32;

if(str1[i]>=65&&str1[j]<=90)
str1[j]=str1[j]+32;
j++;
}
i=0,
j=0;
while(str[i]!='\0'&&str1[j]!='\0')
{
if(str[i]!=str1[j])
{
flag=1;printf("char %c and %c are not equal",str[i],str1[j]);
break;
}
i++;
j++;
}
if(flag==1)
{
printf("string are not equal\n");
}
else
{
printf("string are equal\n");
}
_getch();
}
//Q.28 Write a C program which accept string from user and then reverse the string till first N characters without taking another string.

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int i, j, n, flag = 0;
printf("Enter the string\n");
fgets(str, sizeof(str), stdin);
printf("Enter the value of n\n");
scanf_s("%d", &n);
i = 0;
j = n-1;
while (str[i] != '\n')
{
while (i < n)
{
i++;
}
while (j >= 0)
{
printf("%c", str[j]);
j--;
}
printf("%c", str[i]);
i++;
}
_getch();
}
//Q.29 Write a C program which accept string from user and then accept range and reverse the string in that range without taking another string.

#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
int n1, n2, i, j;

printf("Enter the string\n");
fgets(str, sizeof(str), stdin);

printf("Enter the value of N1\n");
scanf_s("%d", &n1);

printf("Enter the value of N2\n");
scanf_s("%d", &n2);

i = 0;
n1 = n1 - 1;
n2 = n2 - 1;
j = n2;
while (str[i] != '\n')
{
while (i < n1)
{
printf("%c", str[i]);
i++;
}
while (i < n2)
{
i++;
}
while (j >= n1)
{
printf("%c", str[j]);
j--;
}
printf("%c", str[i+1]);
i++;
}
_getch();
}

//Q.30 Write a C program which accept string from user and reverse words from that string which are of even length.
 #include<stdio.h>
  void main()
{
 char str[100];
char s[100];
int count = 0, i, j;
printf("Enter the string\n");
fgets(str, sizeof(str), stdin);
i = 0;
j = 0;
while (str[i] != '\0')
{

while (str[i] != ' ' && str[i] != '\n')
{
s[j] = str[i];
count++;
i++;
j++;
}
if (count % 2 == 0)
{
j = i - 1;
while (str[j] != ' ' && j >= 0)
{
printf("%c", str[j]);
j--;
}
}
else
{
s[j] = '\0';
j = 0;
while (s[j] != '\0')
{
printf("%c", s[j]);
j++;
}
}
i++;
 }
_getch();
}

 
 //Q.31 check string is palindrome or not.

#include<stdio.h>
#include<conio.h>
void main()
 {
  char str[100];
  int i,count,j,check;

  printf("enter the string:");
  fgets(str,sizeof(str),stdin);

  i=0;
  while(str[i]!='\n')
  {
  i++;
  }
  count=i;
  i=0;
  j=count-1;
  check=0;
  while(str[i]!='\n')
  {
   if(str[i]==str[j])
   {
   check++;
   }
   i++;
   j--;
  }
  if(check==count)
  {
   printf("given string is palindrome");
  }
  else
  {
  printf("given string is not palindrome");
  }
  _getch();
 }
 

 
 //Q.32 Write a C program to count number of alphabates, space and words in given string.

#include<stdio.h>
#include<conio.h>
 void main()
 {
  char str[100];
  int i=0,a_count=0,s_count=0,count=0,w_count=0;

  printf("enter the string\n");
  fgets(str,sizeof(str),stdin);

  while(str[i]!='\0')
  {
   while(str[i]==' ')
   {
    s_count++;
    i++;
   }
   if(str[i]>='a' || str[i]<='z' || str[i]>='A' || str[i]<='Z')
   {
    a_count++;
   }
   count=0;
   while(str[i]!=' ' && str[i]!='\n')
   {
   count++;
   i++;
   }
   if(count>=1)
   {
   w_count++;
   }
   i++;
  }
  printf("alpahabets %d\n",a_count);
   printf("spaces %d\n",s_count);
    printf("word %d\n",w_count);
 _getch();
 }
