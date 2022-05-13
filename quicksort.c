//Now we are codding quicksort program

#include<stdio.h>
void quicksort(int [], int, int);
int partition(int a[], int first, int last);

void quicksort(int a[], int first, int last)
{
    int j;
    if(first<last)
    {
        j=partition(a,first,last+1);
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}

int partition(int a[], int first, int last)
{
    int v=a[first];
    int i=first;
    int j=last;

    do{
        do{
            i++;
        }while(a[i]<v);
        do{
            j--;
        }while(a[j]>v);
        if(i<j)
        {
            a[i]= a[i] ^ a[j];
            a[j]=a[i] ^ a[j];
            a[i]= a[i] ^ a[j];
        }
    }while(i<j);
    a[first]=a[j];
    a[j]=v;
    
    return j;
}

//Now main method

void main()
{
    int i,n;
    printf("Enter the no.of elements to sort: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements to sort: ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    quicksort(arr,0,n-1);
    printf("The sorted element is: ");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
}