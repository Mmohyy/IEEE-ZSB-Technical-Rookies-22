#include <stdio.h>
#include <stdlib.h>

int main()
{
  int t;
  scanf("%d",&t);

  for(int i=0;i<t;i++)
  {
      int n,k;
      scanf("%d %d",&n,&k);
      int arr[n];
      for(int j=0;j<n;j++)
        scanf("%d",&arr[j]);

      while(k--)
     {
         for(int j=0;j<n;j++)
         {
           if(arr[j]<arr[j+1])
           {
                int tmp=j;
                while(tmp<n-1)
                {
                  arr[tmp]=arr[tmp+1];
                  tmp++;
                }
             n--;
          }
        }
     }

   for(int j=0;j<n;j++)
    printf("%d\t",arr[j]);

    printf("\n");
  }
}
