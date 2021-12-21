#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i;

 printf("enter the number of elements:");
 scanf("%d",&n);

  int arr[n];
  printf("enter the elements:");
  for (i=0;i<n;i++)
    scanf("%d",&arr[i]);

   insertion_sorting(arr,n);
   for(i=n-2;i>=0;i--)
     {
       if(arr[i]!= arr[n-1])
         {
         printf("\n%d",arr[i]);
         break;
         }

     }
 return(0);
    }

void insertion_sorting(int a[],int n)
{
  int i,j,k;
    for(i=1;i<n;i++)
    {
        j=i-1;
        k=a[i];

       while(j>=0 && a[j]>k)
         {
            a[j+1]=a[j];
            j--;
         }
        a[j+1]=k;
    }
}

