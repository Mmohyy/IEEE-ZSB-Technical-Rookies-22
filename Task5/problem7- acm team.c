#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,k,max=0,res=0,temp;
    scanf("%d %d",&r,&c);

    char arr[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          scanf("%c",&arr[i][j]);

    for(i=0;i<r-1;i++)
    {
        for(j=i+1;j<r;j++)
        {
            temp=0;
             for(k=0;k<c;k++)
             {
                 if(arr[i][k]=='1' || arr[j][k]=='1')
                    temp++;
                 if(temp>max)
                 {
                     max=temp;
                     res=0;
                 }
                 if(temp==max)
                    res++;
             }
        }
    }
    printf("%d\n%d",max,res);
}
