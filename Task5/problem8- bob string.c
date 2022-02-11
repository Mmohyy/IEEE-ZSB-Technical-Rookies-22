#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,n,q;
    scanf("%d",&t);
    char S[20],T[20];

    for(i=0;i<t;i++)
    {
        q=0;
        scanf("%s",S);
        scanf("%s",T);
        n=strlen(S);

        for(j=0;j<n;j++)
        {
            if(T[j]!=S[n-1-j])
            {
                T[j]=S[n-1-j];
                q+=2;
            }
        }
        printf("%d\n",q);
    }
}
