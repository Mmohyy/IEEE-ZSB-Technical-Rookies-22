#include <stdio.h>
#include <stdlib.h>

int main()
{
    long f,f1,f2;
    int n,i;
    printf("Number:");
    scanf("%d",&n);

    f1=-1;
    f2=1;
    for(i=1;i<=n;i++){
        f=f1+f2;
       printf("%3d",f);
       f1=f2;
       f2=f;
    }
    return 0;
}
