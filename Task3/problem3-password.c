#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void randompassword(int);
int main()
{
    int n=10;
    printf("Password:");
    randompassword(n);
return(0);
}
void randompassword(int n)
{
  char password[n];
  char Upper[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char lower[]="abcdefghijklmnopqrstuvwxyz";
  char numbers[]="0123456789";
  char special[]="@#$%&";
  int i,flag=0;

  srand(time(NULL));
   flag=rand()%4;

   for(i=0;i<n;i++)
     {
        if(flag==1){
            password[i]=Upper[rand()%26];
            flag=rand()%4;
            printf("%c",password[i]);
           }
       else if(flag==2){
           password[i]=lower[rand()%26];
           flag=rand()%4;
           printf("%c",password[i]);
          }
       else if(flag==3){
           password[i]=numbers[rand()%10];
           flag=rand()%4;
           printf("%c",password[i]);
           }
       else {
           password[i]=special[rand()%5];
           flag=rand()%4;
           printf("%c",password[i]);
          }
       }
}
