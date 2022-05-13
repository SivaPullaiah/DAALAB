//Now the merge sort time
#include<stdio.h>
void merge(int [], int, int, int);
void mergesort(int [], int, int);
void merge(int a[], int low, int mid, int high)
{
    int b[high], h,i,j,k;
    h = low;
    i = low;
    j = mid+1;
    while((h<=mid) && (j<=high))
    {
        if(a[h] < a[j])
        {
            b[i] = a[h];
            h++;
        }
        else{
            b[i] = a[j];
            j++;
        }
        i++;
    }

    if(h>mid)
    {
        for(k=j; k<=high; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=mid; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++)
        a[k] = b[k];
}

//Now start mergesort method
void mergesort(int a[], int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1, high);
        merge(a, low, mid, high);
    }
}

//Now main
void main()
{
    int i,n;
    printf("Enter the size of the elements to sort: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements to sort: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    mergesort(a,0,n-1);
    printf("After sorted elements are: ");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}