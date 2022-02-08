#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,d,i,j,k,count=0;
    scanf("%d %d",&n,&d);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n-2;i++){
       for(j=1;j<n-1;j++){
            for(k=2;k<n;k++){
              if((arr[j]-arr[i])==d && (arr[k]-arr[j])==d)
                 count++;
      }
    }
  }
    printf("%d",count);
}
