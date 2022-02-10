#include <stdio.h>
#include <stdlib.h>

void heapify ( int arr[], int n, int i)
{
  int l=2*i+1;
  int r=2*i+2;
  int max=i;

  if(l<n&&arr[l]>arr[max])
      max=l;
  if(r<n&&arr[r]>arr[max])
    max=r;

  if(max != i)
    {
        int temp;
      temp=arr[i];
      arr[i]=arr[max];
      arr[max]=temp;
     heapify(arr,n,max);
   }
}

void buildheap(int arr[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
}

void printheap(int arr[],int n)
{
    	for (int i = 0; i < n; i++)
            printf("%-5d",arr[i]);
}

void main()
{
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    buildheap(arr,n);
    printheap(arr,n);
}
