#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t;
    printf("Grid:");
     scanf("%d",&t);
    int arr[t][t];
    for(i=0;i<t;i++){
       for(j=0;j<t;j++)
            scanf("%1d",&arr[i][j]);
      }
    printf("\n");
    for(i=0;i<t;i++){
       for(j=0;j<t;j++){
        if (arr[i][j]>arr[i][j-1] && arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j])
            printf("%c",'X');
        else
            printf("%d",arr[i][j]);
       }
       printf("\n");
    }
}
