#include <stdio.h>
#include <stdlib.h>
int main () {
    int n,prime,i,j;

 printf("Number:");
 scanf("%d",&n);

 for(i=2;i<=n;i++)
 {
     prime=1;
     for(j=2;j<=i/2;j++)
     {
         if(i%j==0) {
             prime=0;
            break;
         }
     }
     if(prime==1) printf("%3d",i);
 }

    return(0);
}
