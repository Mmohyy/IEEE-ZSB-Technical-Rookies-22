#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i,t;
 printf("Case tests:");
  scanf("%d",&t);

 int arr[t];
 for(i=0;i<t;i++){
    int n,n1,tmp,count=0;

    scanf("%d",&n);
    n1=n;
    while (n1 > 0)
      {
       tmp=n1%10;
       if (tmp!=0 && (n%tmp)==0 )
            count++;
        n1/=10;
      }
 arr[i]=count;
 }
   for(i=0;i<t;i++)
    printf("%d\n",arr[i]);
}
