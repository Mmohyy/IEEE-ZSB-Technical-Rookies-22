#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s=0;
    int dl=0,dr=0;

  printf("enter the width of the matrix:");
  scanf("%d",&n);

  int arr[n][n];
  printf("enter the %dX%d elements:\n",n,n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
              if (i==j) dl+=arr[i][j];
              if (i+j==n-1) dr+=arr[i][j];
            }
        }
s=abs(dl-dr);
printf("\n\n%d",s);
return(0);
}
