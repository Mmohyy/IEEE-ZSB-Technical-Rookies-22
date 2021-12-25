#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n,i,pos=0,count=0,last_pos;
    printf("Number:");
     scanf("%d",&n);
      char arr[n+1];
    arr[n]='\0';
    for(i=0;i<=n+1;i++)
        scanf("%c",&arr[i]);

    for(i=0;i<=n+1;i++)
    {
        last_pos=pos;
        if (arr[i]=='U')
            pos++;
       else if(arr[i]=='D')
            pos--;

        if (pos==0 && i!=0){
           if (last_pos==-1)
           count++;
        }
    }
    printf("\n%d",count);
}
