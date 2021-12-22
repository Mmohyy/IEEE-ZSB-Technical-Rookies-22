#include <stdio.h>
#include <stdlib.h>
int for_sum (int a[], int n);
int while_sum (int a[], int n);
int recur_sum(int a[],int n);
int main()
{
  int n,i,f,w,r;
   printf("No of items in the list:");
   scanf("%d",&n);
   int arr[n];
   printf("Items:");
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    f=for_sum(arr,n);
    printf("\n%d",f);

   w=while_sum(arr,n);
    printf("\n%d",w);

    r=recur_sum(arr,n);
    printf("\n%d",r);

}
int for_sum (int a[], int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return(s);
}
int while_sum (int a[], int n)
{
    int s=0,i=0;
    while(i<n)
        {
        s+=a[i];
        i++;
        }
  return (s);
}
int recur_sum(int a[],int n)
{
  if (n <= 0) return(0);
  return (a[n-1]+recur_sum(a,n-1));
}
