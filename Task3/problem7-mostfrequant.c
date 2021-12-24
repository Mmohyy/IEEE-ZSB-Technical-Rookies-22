#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,count=0,max=0,res=0;
  printf("Number:");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
         {
           if(arr[i]==arr[j])
            count++;
         }
       if(count>max)
       {
         max=count;
         res=arr[i];
       }
    }
 printf("%d",res);
}
