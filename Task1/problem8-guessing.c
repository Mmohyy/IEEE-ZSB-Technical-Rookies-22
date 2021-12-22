#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int n,g,t=1;
  srand(time(0));
  n=rand()%10 +1;
  do{
    printf("Guess a number between 1 and 10:");
    scanf("%d",&g);
    if(g!=n) printf("Wrong guess\n");
    else printf("You got it in %d tries",t);
    t++;
  }while(g!=n);
}
