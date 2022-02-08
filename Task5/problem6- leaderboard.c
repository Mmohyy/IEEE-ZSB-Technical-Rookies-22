#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,count=1,temp;
    scanf("%d",&n);
    int score[n],rank[n];
    for(i=0;i<n;i++)
        scanf("%d",&score[i]);

    for(i=0;i<n;i++)
        {
            rank[i]=count;
            if(score[i]!= score[i+1])
              count++;
        }

    scanf("%d",&m);
    int player[m];
    for(i=0;i<m;i++)
        scanf("%d",&player[i]);

    for(i=0;i<m;i++)
    {
        if(player[i]>=score[0])
            temp=1;
        else if(player[i]<score[n-1])
            temp=rank[n-1]+1;
        else if(player[i]==score[n-1])
            temp=rank[n-1];
        else
        {
            for(int j=0;j<n;j++)
            if (player[i]==score[j])
                temp=rank[j];
            else if(player[i]<score[j]&& player[i]>score[j+1])
                   temp=rank[j+1];
        }
        printf("%d\n",temp);
    }
}
