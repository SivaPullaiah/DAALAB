#include<stdio.h>

int max,min;

int maxmin(int arr[], int n)
{
  min=max=arr[0];
  for(int i=0; i<n-1; i++)
  {
    if(arr[i]<arr[i+1])
    {
      if(min>arr[i])
        min=arr[i];
      if(max<arr[i+1])
        max=arr[i+1];
    }
    else
    {
      if(min>arr[i+1])
        min=arr[i+1];
      if(max<arr[i])
        max=arr[i];
    }
  }
  //if you maintain max, min has static Variables it is accessible by all the program
  //printf("Max=%d\nMin=%d",max,min);
}

void print(int Max, int Min)
{
  printf("Max=%d\nMin=%d",Max,Min);
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

  maxmin(arr, n);
  print(max,min);
}
