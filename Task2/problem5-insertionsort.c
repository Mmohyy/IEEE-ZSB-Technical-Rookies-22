#include <stdio.h>
#include <stdlib.h>
int main()
{
  int arr[]={20,100,3,25,6,95,45,55};
  int n= sizeof(arr)/sizeof(arr[0]) ;

  insertion_sorting(arr,n);

 for(int i=0;i<n;i++)
    printf("%-4d",arr[i]);
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
