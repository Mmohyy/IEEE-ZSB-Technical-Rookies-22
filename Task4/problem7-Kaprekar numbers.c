#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int p,q,i;
    printf("Start:");
     scanf("%d",&p);
    printf("End:");
     scanf("%d",&q);
    int count=0;
     for(i=p;i<=q;i++)
      {
          int k,mul,tmp,sum=0,count=0;
           k=i;
           while(k>0)
            {
              count++;
              k/=10;
            }
        mul=pow(i,2);
        tmp=pow(10,count);
        sum=(mul/tmp) + (mul%tmp);
         if(sum == i)
            printf("%-6d",sum);
      }
}
