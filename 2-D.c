
/*
//Q.accept matrix and print 

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[3][3];
	int i, j;
	printf("enter the elements\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("2D is array is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	_getch();
}
*/

/*
//Q1.Write a C program to add two matrices in third Matrix(Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i, j;
	printf("enter first array elements : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d",&a[i][j]);
		}
	}
	printf("first matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the second array elements : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d",&b[i][j]);
		}
	}
	printf("second string \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("adition is : \n");
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	_getch();
}
*/

/*
//Q2. Write a C program to subtract two matrices in third matrix (Using Static memory Allocation).

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i, j;
	printf("enter first array elements : \n");
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
	printf("enter the second array elements : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("second string \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("Substraction is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	_getch();
}
*/

/*
//Q3. Write a c program to check whether given matrix is upper triangular or not (Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int i, j;
	static int flag = 0;
	printf("enter the array elements : \n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i>j && a[i][j]==0)
			{
				flag=1;
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
//Q4. Write a C program to check whether given matrix is lower triangular or not (Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int i, j;
	static int flag = 0;
	printf("enter the array elements : \n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i < j && a[i][j] == 0)
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

//Q5.Write C Program to Check if a given Matrix is an Identity Matrix. (Using Static Memory Allocation).
/*
//Q6.Write a C Program to check whether a given matrix is an identity matrix or not (Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int i, j;
	static int flag = 0;
	printf("enter the array elements : \n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i > j && a[i][j] == 0)    //upper
			{
				flag = 1;
			}
			else if (i < j && a[i][j] == 0)    //lower
			{
				flag = 1;
			}
			else if (i = j && a[i][j] == 1)
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
//Q7.Write C program to check if the matrix is symmetric or not (Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int i, j;
	static int flag = 0;
	printf("enter the array elements : \n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i < j && a[i][j]==a[j][i])
			{
				flag = 1;
			}
			if (i > j && a[i][j] == a[j][i])
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
//Q8.Write a C Program to find the transpose of a given matrix (Using Static Memory Allocation)./

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3];
	int b[3][3];
	int i, j;
	int temp;
	printf("enter the array elements : \n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			b[j][i] = a[i][j];
			//a[i][j] = b[j][i];
		}
	}
	printf("transpose matrix is : \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	_getch();
}
*/
/*
//Q.9.Write a C Program to Search Element in a 2D Array (Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3];
	int b[3][3];
	int i, j;
	int num, flag = 0;

	printf("Enter the array Elements\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("To Display array Elements\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Enter the searching number\n");
	scanf_s("%d", &num);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] == num)
			{
				flag = 1;
			}
		}
	}

	if (flag == 1)
	{
		printf("Number are found\n");
	}
	else
	{
		printf("Number are not found\n");
	}
	_getch();
}
*/

/*
//10.Write C Program to read and print a Matrix, R and C must be input by User. (Using Static Memory Allocation).

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10];
	int i, j;
	int row = 0, col = 0;

	printf("Enter the how many rows\n");
	scanf_s("%d", &row);

	printf("Enter the how many columns\n");
	scanf_s("%d", &col);

	printf("enter array elements:\n");

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}

	printf("To display array Elements\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	_getch();
}
*/
/*
//Q.11 multiplication of two array.

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
				c[i][j] = c[i][j]+a[i][j]+b[i][j];
				
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
	}
	_getch();
}
*/