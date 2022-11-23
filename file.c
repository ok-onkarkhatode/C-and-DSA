/*
// File writing

#include<stdio.h>
#include<conio.h>

void main()
{
 FILE*fp=NULL;

 fp = fopen("D://onkar//file1.txt","w");

 if(fp == NULL)
 {
  printf("file is not created");
 }
 else
 {
   printf("file is created");
   fprintf(fp,"%d onkar bhaskar",12);
 }

 fclose(fp);
 _getch();
}
*/

/*
// File reading

#include<stdio.h>
#include<conio.h>

void main()
{
 char ch;
 FILE*fp=NULL;

 fp = fopen("D://onkar//file1.txt","r");

 if(fp == NULL)
 {
  printf("file is not created");
 }
 else
 {
   while(1)
	 {
		fscanf(fp,"%c",&ch);
		if(feof(fp))
		{
		 break;
		}
		else
		{
			printf("%c",ch);
		}
	 }
 }
 _getch();
}
*/

// File append

#include<stdio.h>
#include<conio.h>

void main()
{
 char ch;
 FILE*fp=NULL;

 fp = fopen("D://onkar//file1.txt","a");
 fprintf(fp,"\n onkar kh");
/*
 if(fp == NULL)
 {
  printf("file is not created");
 }
 else
 {
   while(1)
	 {
		fscanf(fp,"%c",&ch);
		if(feof(fp))
		{
		 break;
		}
		else
		{
			printf("%c",ch);
		}
	 }
 }*/
 _getch();
}