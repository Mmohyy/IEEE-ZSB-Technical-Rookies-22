#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int plaind (char a[]);
 int main()
 {
  char word[100];
    printf("please enter the word:");
    scanf("%s",&word);

   if(plaind(word)==1) printf("\n%s is plaindrome",word);
   else printf("\n%s isn't plaindrome",word);
    return(0);
}

int plaind (char a[])
{
int b=1,i;
  for(i=0;i<strlen(a)/2;i++)
  {
      if(a[i]!= a[strlen(a)-1-i])
        b=0;
        break;
  }
  return(b);
}
