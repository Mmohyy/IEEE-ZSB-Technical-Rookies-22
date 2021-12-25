#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void selection_sort(int b[],int);
int rec_trial(int ,int ,int );
int main()
{
    int n,b;
    int val=6174,count=0;
     printf("Number:");
     scanf("%d",&n);
     b=rec_trial(n,val,count);
     printf("%d\n",b);
}
int rec_trial(int n,int val,int count)
{
    count++;
   int num[4];
    int des[4];
    int i,c,d,large=0,small=0,res;
    for(i=0;i<4;i++)
       {
        num[i]=n%10;
        n=n/10;
       }
  selection_sort(num,4);
  for(i=0;i<4;i++) des[i]=num[4-i-1];
     for(i=0;i<4;i++) {
         c =des[i] * pow(10,(4-i-1));
         large+=c;
        }

    for(i=0;i<4;i++) {
         d=num[i] * pow(10,(4-i-1));
         small+=d;
        }

    res =(large)-(small);
    if (res == val) return(count);
    return(rec_trial(res,val,count));
}
void selection_sort(int b[],int n)
{
  int i,j;
   for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
           if(b[i]>b[j])
             {
               int temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
}
