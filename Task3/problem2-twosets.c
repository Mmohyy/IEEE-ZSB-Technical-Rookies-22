#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void selection_sort(int b[],int);
int main()
{
 int n1,n2,i,lcm,gcd,count=0;
 scanf("%d",&n1);
 scanf("%d",&n2);
 int num1[n1] , num2[n2];
    for(i=0;i<n1;i++)
        scanf("%d",&num1[i]);
    for(i=0;i<n2;i++)
        scanf("%d",&num2[i]);

    selection_sort(num1,n1);
    selection_sort(num2,n2);

    lcm=num1[0];
    gcd=num2[n2-1];
    
 int x=lcm;
 while(x<= gcd){
    bool t=true;

    for(i=0;i<n1;i++)
        if((x%num1[i])!=0)
            t=false;


     for(i=0;i<n2;i++)
        if((num2[i]%x)!=0)
            t=false;
            
    if (t==true)
        count++;
    x+=lcm;
  }
 printf("%d",count);
}
void selection_sort(int b[],int n)
{
  int i,j;
   for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
           if(b[i]<b[j])
             {
               int temp;
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
}
