#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,v1,v2;
  printf("x1:");
  scanf("%d",&x1);
  printf("v1:");
  scanf("%d",&v1);

  printf("x2:");
  scanf("%d",&x2);
  printf("v2:");
  scanf("%d",&v2);

    if( (x1-x2)%(v1-v2) ==0)
        printf("Yes");
    else printf("No");
}
