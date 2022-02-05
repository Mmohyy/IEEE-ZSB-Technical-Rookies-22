#include <stdio.h>
#include <stdlib.h>

int main(){

int arr[]={2,5,3,4,5,2};
int i,j,d,n=6;
int tmp=n;
     for (i=0;i<n-1;i++)
       {
         for(j=i+1;j<n-1;j++)
           {
             if(arr[i]==arr[j])
               {
                 d=abs(i-j);
                 if(d<tmp) tmp=d;
               }
           }
       }
printf("%d",tmp);
return(0);
}
