#include <stdio.h>
#include <stdlib.h>

int main () {
 int l,w,a,p;
  printf("Rectangular lenth:");
  scanf("%d",&l);
   printf("Rectangular width:");
  scanf("%d",&w);
  
a=l*w;
p=(l+w)*2;
  printf("\nArea=%d\nPerimeter=%d\n",a,p);
    return(0);
}
