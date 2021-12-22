#include <stdio.h>
#include <stdlib.h>

 int main(){
     //binary search
     int arr[]={5,10,15,20,25,30,35,40,45,50};
     int n,lower,upper,med,key,pos=-1;
     n= sizeof(arr)/sizeof(arr[0]);
   
     printf("enter the key to be searched:");
     scanf("%d",&key);
     lower=0;
     upper=n-1;
   
     do{
     med=(lower+upper)/2;

     if (key==arr[med])
        {
            pos=med+1;
            break;
        }
    else if(key<arr[med]) upper=med-1;
     else lower=med+1;

     } while (lower<= upper);
   
     if (pos==-1) printf("%d isn't located in the array",key);
     else  printf("%d is located in position %d",key,pos);
}
