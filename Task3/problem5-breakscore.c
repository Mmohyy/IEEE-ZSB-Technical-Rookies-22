#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,high=0,low=0;
 printf("No of scores:");
  scanf("%d",&n);
  int score[n],min[n],max[n];
  for(i=0;i<n;i++)
    scanf("%d",&score[i]);
    
    min[0]=max[0]=score[0];
  for(i=1;i<n;i++)
  {
      if(score[i]<score[i-1] && score[i]<min[i-1])
        min[i]=score[i];
      else min[i]=min[i-1];

      if (score[i]>score[i-1] && score[i]>max[i-1])
        max[i]=score[i];
      else max[i]=max[i-1];
  }
 
  for(i=1;i<n;i++)
    {
        if(max[i]>max[i-1])
            high++;
        if (min[i]<min[i-1])
            low++;
    }
    printf("%d\t%d",high,low);
}
