

/*
//Q.1 print and display array element

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i;

	printf("enter the array element\n");

	for(i=0;i<5;i++)
	{
	 scanf_s("%d",&arr[i]);

	}

	printf("array element are\n");
	for(i=0;i<5;i++)
	{
	 printf("%d\n",arr[i]);
	
	}
	_getch();
}
*/

//Q.2 reverse array element
/*
#include<stdio.h>
#include<conio.h>
void main()
{
 int array[5];
 int i;
  
 printf("enter the array element\n");

 for(i=0;i<5;i++)
 {
  scanf_s("%d",&array[i]);
 }
 printf("reverse order array");
 for(i=4;i>-1;i--)
 {
  printf("%d\n",array[i]);
 
 }

 _getch();
}
*/

/*
//Q.3 search an element in array

#include<stdio.h>
#include<conio.h>
void main()
{
   int arr[5];
   int i,num,flag=0;
   printf("enter the element of array ;\n");
     
   for(i=0;i<5;i++)
   {
	   scanf_s("%d",&arr[i]);
   }

   printf("Array elements are want to find\n");
   scanf_s("%d",&num);
 
   for(i=0;i<5;i++)
   {
     if(arr[i] == num)
	 {
		flag=1;
		break;
	 }
   }
   if(flag == 0)
   {
   printf("given number is not found");
   }
   else
   {
     printf("given number is found");
   }
   _getch();
}
*/

/*
//Q.4 array program to ascending order

#include<stdio.h>
#include<conio.h>

void main()
{
 int arr[5];
 int i,max;
 printf("enter the array elements\n");
 for(i=0;i<5;i++)
 {
 scanf_s("%d",&arr[i]);
 }

 
 max=arr[0];
 for(i=0;i<5;i++)
 {
	 if(arr[i]>max)
	 {
		 max=arr[i];
	 }
 }
 for(i=0;i<5;i++)
 {
 printf(" %d\n",arr[i]);
 }
 _getch();
}
*/

/*
//Q. ascending order

#include<stdio.h>
#include<conio.h>

void main()
{
 int arr[5];
 int i,j,temp;
 printf("to enter the array elements\n");
 for(i=0;i<5;i++)
 {
  scanf_s("%d",&arr[i]);
 }

 for(i=0; i<5; i++)
 {
  for(j=i+1;j<5;j++)
  {
	  if(arr[i]>arr[j])
	  {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
	  }
    }
 }
 printf("array element sorted\n");
   for(i=0;i<5;i++)
   {
    printf("%d\n",arr[i]);
   }
   _getch();
}   
  
 */
 /*
 //Q.desending order

 #include<stdio.h>
#include<conio.h>

void main()
{
 int arr[5];
 int i,j,temp;
 printf("to enter the array elements\n");
 for(i=0;i<5;i++)
 {
  scanf_s("%d",&arr[i]);
 }

 for(i=0; i<5; i++)
 {
  for(j=i+1;j<5;j++)
  {
	  if(arr[i]<arr[j])
	  {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
	  }
    }
 }
 printf("array element sorted\n");
   for(i=0;i<5;i++)
   {
    printf("%d\n",arr[i]);
   }
   _getch();
} 
*/

/*
//Q. minimum order
#include<stdio.h>
#include<conio.h>

void main()
{
 int arr[5];
 int i,min;

 printf("enter the array elements\n");
 for(i=0;i<5;i++)
 {
 scanf_s("%d",&arr[i]);
 }

 min=arr[0];
 for(i=0;i<5;i++)
 {
	 if(arr[i]<min)
	 {
		 min=arr[i];
	 }
 }
 for(i=0;i<5;i++)
 {
 printf(" %d\n",arr[i]);
 }
 _getch();
}
*/

/*
//Q.merge two array

#include<stdio.h>
#include<conio.h>

void main()
 {
  int arr1[5],arr2[5];
  int i;
  printf("enter the element of first arrray\n");
  for(i=0;i<5;i++)
  {
  scanf_s("%d\n ",&arr1[i]); 
  }
  printf("enter the element of second array\n");
  for(i=0;i<5;i++)
  {
   scanf_s("%d\n",&arr2[i]);
  }

 for(i=0;i<5;i++)
 {
 printf("%d\n",&arr1[i],&arr2[i]);
 }
 _getch();
 }
 */



/*
//Q.1 write a c program to find the sum of all the elements of an array.

#include<stdio.h>
#include<conio.h>

void main()
{
 int array[5];
 int i,sum=0;

 printf("enter the array elements\n");
 for(i=0;i<5;i++)
 {
  scanf_s("%d",&array[i]);
 }

   for(i=0;i<5;i++)
   {
	   sum=sum+array[i];
   }
  printf("sum of array elementss \n");
    for(i=0;i<1;i++)
	{
	printf("%d",sum);
	}
	_getch();
}

*/

/*
//Q.2 An array consist of integers.Write a c program to count the number of elements less than,greater than and equal to zero.
 
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,a[5];
 int pcount=0,ncount=0,zcount=0;
 printf("enter the array elements\n");
 for(i=0;i<5;i++)
 {
  scanf_s("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  if(a[i]>0)
  {
   pcount++;
  }

  if(a[i]<0)
  {
   ncount++;
  }
  if(a[i]==0)
  {
  zcount++;
  }
 }
 printf("positive number in array %d\n",pcount);
 printf("negative number in array %d\n",ncount);
 printf("zero number in array %d\n",zcount);
 _getch();
}

*/


/*
//Q.3 write a c program that return the positions of the pallindrome element in array.

#include<stdio.h>
#include<conio.h>

void main()
 {
int i,n,a[5];
int rem,sum=0;

 printf("enter the array elements\n");
 for(i=0;i<5;i++)
 {
  scanf_s("%d",&a[i]);
 }

 for(i=0;i<5;i++)
 {
  n=a[i];
  sum=0;
  while(n>0)
  {
   rem=n%10;
   sum=sum*10+rem;
   n=n/10;

  }
  if(a[i]==sum)
  {
  printf("position of the palindrome element in array \n");
  printf("%d\n",i);
  }
 }

 _getch();
 }
 */

 /*
 //Q.4 Write a c program to sort first half of array in ascending order and second half of array in desending order


#include<stdio.h>
#include<conio.h>

 void main()
{
 int i,j,a[10],temp;

 printf("enter the array elements \n");
 for(i=0;i<5;i++)
 {
  scanf_s("%d",&a[i]);
 }
   temp=0;
  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   {
    if(a[i]<a[j])
	{
     temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
   }
  }
 }
 temp=0;
 for(i=5;i<10;i++)
 {
   for(j=5;j<10;j++)
   {
    if(a[i]>a[j])
	{
     temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
   }
  }
   printf("first half of array in ascending order and second half of array is descending order\n");
   for(i=0;i<10;i++)
   {
    printf("%d\n",a[i]);
   }
 }
 */


/*
// Q.5 write a c program to copy the elements of one array into another array.

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,a1[6],a2[6];

 printf("enter the array elements\n");
 for(i=0;i<6;i++)
 {
	 scanf_s("%d",&a1[i]);
 }
  
 for(i=0;i<6;i++)

 {
   a2[i]=a1[i];
 }
 printf(" copy the elements in another array");
 for(i=0;i<6;i++)
 {
  printf(" %d\n",a2[i]);
 }
 
 _getch();
}
*/


//Q.6 write a c program to sort only even numbers in given array.

/*
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,j,a[13],temp;

 printf("enter the array elements");
 for(i=0;i<13;i++)
 {
  scanf_s("%d",&a[i]);
 }
 
  for(i=0;i<13;i++)
 {
  if(a[i]%2==0)
  {
   for(j=0;i<13;j++)
   {
    if(a[j]%2==0)
	{
	 if(a[i]<a[j])
	 {
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	 }
	}
   }
  }
  printf("output of the sort only even numbers in array\n");
  for(i=0;i<13;i++)
  {
   printf("%d",a[i]);
  }
 }
  _getch();
}
 */






 /*
//Q.7 write a program in c separate odd and even integers in same array.
#include<stdio.h>
#include<conio.h>

void main()
 {
 int i,arr[6];

 printf("enter the array elements\n");
 for(i=0;i<6;i++)
 {
 scanf_s("%d",&arr[i]);
 }
  
 printf("even numbers in an array\n");
 for(i=0;i<6;i++)
 {
  if(arr[i]%2 == 0)
  {
  printf("%d",arr[i]);
  }
  if(arr[i]%2!=0)
  {
  printf("%d",arr[i]);
  }
 }
  _getch();
 }
 */
 

 /*
//Q.8 write a program in c to count the fequency of each element of an array.

#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,a[8];
int count,flag;

printf("enter the array elements\n");
for(i=0;i<8;i++)
{
 scanf_s("%d",&a[i]);
}
 for(i=0;i<8;i++)
 { 
  count=0;
  for(j=i+1;j<8;j++)
  {
    if(a[i]==a[j])
	{
	 count++;
	}
  }
   flag=0;
   for(i=0;i<8;i++)
  {
   for(j=8;j>1;j--)
   {

	   if(a[i]==a[j])
	   {
		flag=1;
	   break;
   }//end if
  }//end for j
 }
   if(flag==0)
   {
     printf("%d==%d\n",a[i],count,flag);
   }
 }
 _getch();
}
*/
/*
 //Q.8*
#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a[5],i,j,count,flag=0,k;
  printf("enter the elements of array:\n");
  for(i=0;i<5;i++)
  {
  scanf_s("%d",&a[i]);
  }
   for(i=0;i<5;i++)
   {
	   flag=0;
	   for(k=i-1;k>=0;k--)
	   {
	    if(a[i]==a[k])
		{
			flag=1;
			break;
	   }
	   }
	   if(flag==0)
	   {
	   count=1;
    for(j=i+1;j<5;j++)
	{
	 if(a[i]==a[j])
	 {
		count++;
	 
	}//end if
	}//end for j
	printf("count frequency of each element of an array:");
	printf("%d==>%d\n",a[i],count);
   }//end for i
   }
  _getch();
 }//end main
 */

 /*
//Q.9 Write a program in c to print all unique elements in an array.

#include<stdio.h>
#include<conio.h>

void main()
 {
	 int a[5],i,j,count;
printf("enter the array elements:\n");
for(i=0;i<5;i++)
{
	 scanf_s("%d",&a[i]);
}

for(i=0;i<5;i++)
{
	count=0;
  for(j=0;j<5;j++)
  {
	 if(i!=j)
	 {
	  if(a[i]==a[j])
	  {
	    count++;
	  }
	  }
  }
  if(count==0)
  {
   printf("%d",a[i],count);
  }
}
_getch();
}
 */

/*
//Q.10 write a program in c to insert new value in the array (sorted array).

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,n,a[8];

 printf("enter the array elements");
 for(i=0;i<8;i++)
 {
  scanf_s("%d",&a[i]);
 }
 printf("enter the input value to be inserted in array\n");
 scanf_s("%d",&n);

 for(i=0;i<8;i++)
 {
 for()
  if(n<arr[i])
 }
 
 _getch();
}
*/