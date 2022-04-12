#include<stdio.h>

void swap(int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

void bubblesort(int arr[], int n)
{
	int flage;
	for(int i=0; i<n-1; i++)
	{
		flage=0;
		for(int j=0; j<n-i-1; j++)
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				flage=-1;
			}
			if(flage==0)
				break;
	}
}

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
}


void main()
{
	int n;
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	int arr[n];

	printf("Please enter %d elements: ",n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	bubblesort(arr,n);
	printf("Sorted array elements: ");
	print(arr,n);
}
