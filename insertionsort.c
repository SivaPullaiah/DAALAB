#include<stdio.h>

void insertionsort(int arr[], int n)
{
  int value,index;
  for(int i=0; i<n; i++)
  {
    value=arr[i];
    index=i;
    while(index>0 && (arr[index-1]>value))
    {
      arr[index]=arr[index-1];
      index--;
    }
    arr[index]=value;
  }
}

void print(int arr[], int n)
{
  for(int i; i<n; i++)
    printf("%d ", arr[i]);
}

void main()
{
  int n;
  printf("Enter the size of an array: ");
  scanf("%d", &n);
  int arr[n];

  printf("Please enter %d elements: ", n);
  for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);

  insertionsort(arr,n);
  printf("The sorted array: ");
  print(arr,n);
}
