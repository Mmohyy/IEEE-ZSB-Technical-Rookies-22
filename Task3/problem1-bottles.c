#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum_arr(int a[],int n);
void selection_sort(int b[],int n);
int main()
{
   int i,n,sum;
  printf("No of bottles:");
  scanf("%d",&n);
   int rem[n],cap[n];
      for(i=0;i<n;i++){
        scanf("%d",&rem[i]);
        scanf("%d",&cap[i]);
     }
  sum=sum_arr(rem,n);
  selection_sort(cap,n);
  
    if(sum<=(cap[0]+cap[1]))
        printf("Yes");
    else printf("No");
    return(0);
}
int sum_arr(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s+=a[i];
    return(s);
}
void selection_sort(int b[],int n)
{
  int i,j;
   for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
           if(b[i]<b[j])
             {
               int temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
}
