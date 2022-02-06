#include <stdio.h>
#include <stdlib.h>
void insertion_sorting(int a[],int n);
int main()
{
    int t,i;
    printf("Test Cases:");
    scanf("%d",&t);
    int arr[t];
   for(i=0;i<t;i++)
   {
       int n,a,b,count,j;
       scanf("%d %d %d",&n,&a,&b);

       for(j=0;j<n;j++)
        arr[j]=(a*j)+((n-j-1)*b);

      insertion_sorting(arr,n);
       for(j=0;j<n;j++)
        printf("%-4d",arr[j]);

       printf("\n");
   }
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
