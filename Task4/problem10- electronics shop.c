#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,n,m,i,j,tmp,max=0;
    scanf("%d %d %d",&b,&n,&m);
    int key[n],usb[m];
    for(i=0;i<n;i++)
        scanf("%d",&key[i]);

    for(i=0;i<m;i++)
        scanf("%d",&usb[i]);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            tmp = key[i]+usb[j];
         if(tmp>max && tmp<=b)
            max=tmp;
        }
    }
    printf("%d",max);
}
