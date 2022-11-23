/*
//Q.1 print and display array element

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5];
	int i;

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

/*
//Bubble sort

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,j,n,temp=0;
  int a[10];

  printf("enter how many we enter\n");
  scanf("%d\n",&n);

  printf("enter the array elements\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }

  for(i=0;i<n-1;i++)
  {
	for(j=0;j<n-i;j++)
	{
		if(a[j] > a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
  }
    printf("elements are sorted by bubble sort\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	_getch();
}
*/






#include<stdio.h>
#include<conio.h>

void insertElementInArray(int a[], int* n1)
{
	int i;
	printf("Enter the how Many Array Elements\n");
	scanf_s("%d", n1);

	printf("Enter the Array Elements\n");
	for (i = 0; i < *n1; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Element Stored Successfully\n");
}

void displayArrayElements(int a[], int n)
{
	int i;
	printf("Array Elements are...\n");
	for (i = 0; i < n; i++)
	{

		printf("%d\n", a[i]);
	}
}

void bubbleSort(int a[], int n)
{
	int i, j, temp;

	for (i = 1 ; i < n ; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

void insertionsort(int a[],int n1)
{
  int pravin;
  int temp;
  int empty;

  for(pravin =1 ;pravin < n1; pravin++)
  {
   temp=a[pravin];
   empty=pravin;
  
   while(empty >0 && a[empty -1] >temp)
   {
    a[empty] = a[empty-1];
	empty--;
   }
   a[empty]=temp;
  }
}

void merge(int a[],int low,int mid ,int high)
{
 int b[10];
 int i = low;
 int j = mid+1;
 int k = 0;

  while(i<= low && j<= high)
  {
   if(a[i] < a[j])
   {
   b[k]=a[i];
   i++;
   k++;  
  }
  else
  {
  b[k] = a[j];
  j++;
  k++;
 }
}
  while(i <= mid)
  {
   b[k]=a[i];
   i++;
   k++;
  
  }

  while( j <= high)
  {
   b[k]=a[j];
   j++;
   k++;
  
  }
  k=0;
  for(i=low; i<=high;i++)
  {
    a[i]=b[k];
	k++;
  
  }
}

 void mergesort(int a[],int low,int high  )
 {
  int mid;
  if(low < high)
  {
   mid=(low+high)/2;
   mergesort(a,low,mid);
   mergesort(a ,mid+1,high);
   merge(a,low ,mid, high);
  } 
 }

 int binarysearch(int a[] ,int  low,int high , int serach)
 {
   int mid;

   if( low < high)
   {
    mid = (low+high)/2;
	if(a[mid] == serach)
	{
	  return mid;
	}
	else if(serach < a[mid])
	{
	  return binarysearch(a , low,mid -1 , serach);
	}
	else 
	{
	  return binarysearch(a , mid +1 , high, serach);
	}	
   }
   return -1;
 }

 int binarysearchwhile(int a[] ,int low,int high,int serach)
 {
   int mid;

   if( low < high)
   {
    mid = (low+high)/2;
	if(a[mid] == serach)
	{
	  printf("mid is found\n");
	  return mid;
	}
	else if(serach < a[mid])
	{
	  high= mid - 1;
	}
	else 
	{
	  low = mid + 1;
	}	
   }
   return -1;
 }
 
 
void main()
{
	int a[100];
	int serach;
	int index;
	int choice, n = 0;
	do
	{
		printf("1.Enter the Array Elements\n");
		printf("2.Display the Array Elements\n");
		printf("3.Sort Elements Using Bubble Sort\n");
		printf("4.insertion sort\n");
		printf("5.mergesort\n");
		printf("6.using binary search\n");
		printf("7.binary sesrch using while loop\n");
		printf("0.Exit\n");

		printf("Enter the your choice\n");
		scanf_s("%d", &choice);

		switch (choice)
		{
			case 1: insertElementInArray(a, &n);
				break;
			case 2: displayArrayElements(a, n);
				break;
			case 3: bubbleSort(a, n);
				break;
			case 4:insertionsort( a,n);
				break;
				case 5:mergesort(a, 0 ,n-1);
				break;
			case 6:printf("enter the serach elements\n");
				   scanf("%d",&serach);
				   
				   bubbleSort(a, n);
				 index =  binarysearch(a , 0, n-1,serach);
				   if(index != -1)
				   {
				    printf("index elements are found\n");
				   }
				   else
				   {
				     printf("index elements are not found\n");
				   }
				break;
			case 7:printf("enter the serach elements\n");
				   scanf("%d",&serach);
				   mergesort(a, 0 ,n-1);
				   
				 index =  binarysearchwhile(a , 0, n-1,serach);
				   if(index != -1)
				   {
				    printf("index elements are found\n");
				   }
				   else
				   {
				     printf("index elements are not found\n");
				   }
				   break;
			case 0:exit(0);
				break;

			default: printf("Invalid Choice please Enter the valid choice\n");
		}
	} while (choice != 0);
	_getch();
}

