
//Q.25
#include<stdio.h>
#include<conio.h>
void main()
{
char str[100],str1[100];
int i;
int count,count1,count3,check;

printf("\nEnterFirststring:");
fgets(str,sizeof(str),stdin);

printf("\nEnterSecondstring:");
fgets(str1,sizeof(str1),stdin);

i=0;
while(str[i]!='\n')
{
i++;
} 
count=0;

i=0;
while(str1[i]!='\n')
{
i++;
} 
count1=0;
if(count>=count1)
{
check=count;
}
else
{
check=count1;
}
i=0;
count3=0;
while(i<check)
{
if(str[i]==str1[i])
{
count3++;
} 
else
{
printf("\nStringsarenotsame\n");
printf("\nMismatchcharacterfoundat%dindex",i);
printf("\nStringfirst=>'%c'",str[i]);
printf("\nStringsecond=>'%c'",str1[i]);
break;
}
i++;
} 
if(count3==count&&count3==count1)
{
printf("\nBothstringsaresame");
} 
_getch();
} 