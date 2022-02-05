#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,i;
    printf("No of test cases:");
    scanf("%d",&n1);
    int arr[n1];
    for (i=0;i<n1;i++)
    {
        int n,c,m,tmp,count=0;
       scanf("%d%d%d",&n,&c,&m);
        count=n/c;
        tmp=count;
       while(tmp >= m){
            count++;
            tmp=tmp-m+1;
          }

      arr[i]=count;
    }

  for(i=0;i<n1;i++)
    printf("%d\n",arr[i]);
}
