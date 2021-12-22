#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s=0;
    printf("Number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++) s+=i;

    printf("\n%d",s);
}
