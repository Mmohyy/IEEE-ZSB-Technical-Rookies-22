#include <stdio.h>
#include <stdlib.h>

 int main(){

int i,j,arr[12],temp[12];
int n=12,c=0;
     printf("Enter The 12 numbers : ");
     for(i=0;i<n;i++)
       scanf("%d",&arr[i]);

       for(i=0;i<n;i++)
       {
           if (arr[i]!= arr[i+1])
            temp[c++]=arr[i];
       }

        for(i=0;i<c;i++)
       printf("%d\t",temp[i]);
       return(0);
    }
    
