/*
//Q.11 multiplication of two array.(static)

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i, j, k;
	printf("enter the first array elements : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("first matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("enter second array elements : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("second matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
		     printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("multiplication of two matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < 3; k++)
			{
				//c[i][j] + a[i][j] * b[k][j];
				c[i][j] += a[i][j] * b[k][j];
				
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
		_getch();
	}
	*/



/*
//Q.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int**p=NULL;
	int i,j;
	p=(int**)malloc(3*sizeof(int*));

	for(i=0;i<3;i++)
	{
	  *(p+i)=(int*)malloc(3*sizeof(int));
	}

	printf("Enter array elemets\n");

	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  scanf_s("%d",*(p+i)+j);
	  }
	}
	printf("matrix is:\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
	  printf("%d\t",*(*(p+i)+j));
	  }
	  printf("\n");
	}
_getch();
}
*/

/*
//Q1.Write a C program to add two matrices in third Matrix(Using dynamic Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int** q = NULL;
    int** r = NULL;
    int i, j;
    p=(int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    q = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
       *(q + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(q + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(q + i) + j));
        }
        printf("\n");
    }
    r = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(r + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("adition is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(r+i)+j) = *(*(p+i)+j) + *(*(q+i)+j);
            printf("%d\t", *(*(r + i) + j));
        }
        printf("\n");
    }
	_getch();
}
*/
/*

//Q.2 Write a C program to subtract two matrices in third matrix (Using Static memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int** q = NULL;
    int** r = NULL;
    int i, j;
    p=(int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    q = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
       *(q + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(q + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(q + i) + j));
        }
        printf("\n");
    }
    r = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(r + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("adition is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(r+i)+j) = *(*(p+i)+j) - *(*(q+i)+j);
            printf("%d\t", *(*(r + i) + j));
        }
        printf("\n");
    }
	_getch();
}
*/

/*
//Q.3 Write a c program to check whether given matrix is upper triangular or not (Using dynamic Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int i, j;
    static int flag=0;
    p = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i > j && *(*(p+i)+j) == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("given matrix is upper triangular matrix");
    }
    else
    {
        printf("given matrix is not upper triangular matrix");
    }
	_getch();
}
*/
/*
//Q.4 Write a c program to check whether given matrix is lower triangular or not (Using dynamic Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int i, j;
    int flag=0;
    p = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j && *(*(p+i)+j) == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("given matrix is lower triangular matrix");
    }
    else
    {
        printf("given matrix is not lower triangular matrix");
    }
	_getch();
}
*/

/*
//Q.5 Write C Program to Check if a given Matrix is an Identity Matrix. (Using dynamic Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int i, j;
    int flag = 0;
    p = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i > j && ((p+i)+j) == 0)    //upper side check
            {
                flag = 1;
            }
            else if (i < j && (**(p + i) + j) == 0)    //lower side check
            {
                flag = 1;
            }
            else if (i= j && *(*(p + i) + j) == 1)
            {
                flag = 1;
            }
        }
        break;
    }
    if (flag == 1)
    {
        printf("given matrix is identity matrix");
    }
    else
    {
        printf("given matrix is not identity matrix");
    }
	_getch();
}
*/

/*
//7.Write C program to check if the matrix is symmetric or not (Using dynamic Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int i, j;
    static int flag = 0;
    p = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j && *(*(p + i) + j) == *(*(p + j) + i))
            {
                flag = 1;
            }
            if (i > j && *(*(p + i) + j) == *(*(p + j) + i))
            {
                flag = 1;
            }
        }
        break;
    }
    if (flag == 1)
    {
        printf("given matrix is symmetric matrix");
    }
    else
    {
        printf("given matrix is not symmetric matrix");
    }
	_getch();
}
*/

/*
 //Q8.Write a C Program to find the transpose of a given matrix (Using Static Memory Allocation).

 #include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int** q = NULL;
    int i, j;
    static int flag = 0;
    p = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    q = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(q + i) = (int*)malloc(3 * sizeof(int));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(q + j) + i) = *(*(p + i) + j);
           *(*(p + i) + j) = *(*(q + j) + i);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(q + i) + j));
        }
        printf("\n");
    }
	_getch();
}
*/

/*
//Q.9.Write a C Program to Search Element in a 2D Array (Using Static Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int i, j,n;
    p = (int**)malloc(3 * sizeof(int));
    for (i = 0; i < 3; i++)
    {
        *(p + i) = (int*)malloc(3 * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
    printf("enter the n number : \n");
    scanf_s("%d", &n);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (n == *(*(p+i)+j))
            {
                printf("%d element is found in the given matrix", n);
            }
        }
    }
	_getch();
}
*/
/*
//10.Write C Program to read and print a Matrix, R and C must be input by User. (Using Static Memory Allocation).

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int** p = NULL;
    int i, j;
    int row, col;
    printf("how many row you want : \n");
    scanf_s("%d", &row);
    printf("how many column you want : \n");
    scanf_s("%d", &col);
    p = (int*)malloc(row * sizeof(int));
    for (i = 0; i < row; i++)
    {
        *(p + i) = (int*)malloc(row * sizeof(int));
    }
    printf("elements of array : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf_s("%d", *(p + i) + j);
        }
    }
    printf("elements of array : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", *(*(p + i) + j));
        }
        printf("\n");
    }
	_getch();
}
*/

/*
//Q.11  multiplication of two matrix
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
 int** p = NULL;
 int** q = NULL;
 int** r = NULL;
 int i, j,k;
 p = (int**)malloc(3 * sizeof(int*));
 for (i = 0; i < 3; i++)
 {
 *(p + i) = (int*)malloc(3 * sizeof(int));
 }
 printf("elements of array : \n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 scanf_s("%d", *(p + i) + j);
 }
 }
 printf("elements of array : \n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 printf("%d\t", *(*(p + i) + j));
 }
 printf("\n");
 }
 q = (int**)malloc(3 * sizeof(int*));
 for (i = 0; i < 3; i++)
 {
 *(q + i) = (int*)malloc(3 * sizeof(int));
 }
 printf("elements of array : \n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 scanf_s("%d", *(q + i) + j);
 }
 }
 printf("elements of array : \n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 printf("%d\t", *(*(q + i) + j));
 }
 printf("\n");
 }
 r = (int**)malloc(3 * sizeof(int*));
 for (i = 0; i < 3; i++)
 {
 *(r + i) = (int*)malloc(3 * sizeof(int));
 }
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 *(*(r+i)+j) = 0;
 for (k = 0; k < 3; k++)
 {
 *(*(r+i)+j) += *(*(p + i) + j) * *(*(q + i) + j);
 }
 }
 }
 printf("multiplication is : \n");
 for (i = 0; i < 3; i++)
 {
 for (j = 0; j < 3; j++)
 {
 printf("%d\t", *(*(r + i) + j));
 }
 printf("\n");
 }
 _getch();
}
*/




//2-D  using dynamic string

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
  char*** p=NULL;
  char*str;
  char ch;
  int size=1;
  int i,j,k=0;

  p=(char***)malloc(3*sizeof(char**));
  
  for(i=0;i<3;i++)
  {
	*(p+i)=(char**)malloc(3*sizeof(char*));
  }

   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
	{
	 size=1;
	 k=0;
	 str=(char*)malloc(sizeof(char));
	 *(str+k)='\0';
	 
	 printf("enter the string ");
	 
	 do
	 {
	  scanf_s("%c",&ch);

	  if(ch !='\n')
	{
	 size++;
	 str=(char*)realloc(str,size*sizeof(char));
	 *(str+k)=ch;
	 *(str+k+1)='\0';
	 k++;
	}
	  
	 } while(ch !='\n');
	 *(*(p+i)+j)=str; 
    }
  }
    printf("To display string mtrix\n");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	  {
		  k=0;
	    while(*(*(*(p+i)+j)+k) !='\0')
		{
		 printf("%c",*(*(*(p+i)+j)+k));
		 k++;
		}
	  }
	}
	_getch();
}