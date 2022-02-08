#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,q,i,j;
    scanf("%d %d %d",&n,&k,&q);
    int arr[n],index[q];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<k;i++)
     {
        int temp;
        temp =arr[0];
        arr[0] = arr[n-1];
        for(j=n-1;j>0;j--)
          arr[j]=arr[j-1];
        arr[1]=temp;
     }
     for(i=0;i<q;i++)
      scanf("%d",&index[i]);

      for(i=0;i<q;i++)
      printf("%d\n",arr[index[i]]);
}
