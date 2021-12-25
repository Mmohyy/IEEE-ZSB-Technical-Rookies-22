#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,p,front,back;
  printf("No of pages:");
   scanf("%d",&n);
  printf("page number:");
   scanf("%d",&p);
   front=p/2;
   back=(n-p)/2;
if (back<front)
    printf("%d",back);
else
    printf("%d",front);
}
