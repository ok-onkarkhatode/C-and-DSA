
#include<stdio.h>
#include<conio.h>

void quicksort(int a[],int L,int H)
{
  int pivot =a[L];
  int low = L+1;

}
void main()
{
	int n;
	int i;
	int a[10];

	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}

	quicksort( a,0 ,n-1);

}