#include <stdio.h>
#include <stdlib.h>

int main()
{
 int d1,d2,m1,m2,y1,y2,fine;

 printf("Actual return date:");
  scanf("%d %d %d",&d1,&m1,&y1);

 printf("Expected return date:");
  scanf("%d %d %d",&d2,&m2,&y2);

 if(y1==y2){
    if (m1<m2) fine=0;
    else if (m1>m2)
        fine=(m1-m2)*500;
    else if (m1==m2)
       {
        if (d1==d2) fine =0;
        else fine = (d1-d2)*15;
       }
 }
 else fine=10000;
printf("Fine=%d",fine);

}
