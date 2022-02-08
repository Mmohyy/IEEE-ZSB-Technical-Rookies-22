#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,t,a,i,count=0,day=0;
 scanf("%d %d",&n,&t);

 while(count < t)
 {
    scanf("%d",&a);
    count+=(86400-a);
    day++;
 }
 printf("%d",day);
 }
