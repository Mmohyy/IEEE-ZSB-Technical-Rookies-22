#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main()
 {

  char st[20];
  int n,n1,i,count=0,mul;
 printf("Enter the sequence :");
 scanf("%s",&st);
 n1= strlen(st);

 printf("Number of letters :");
 scanf("%d",&n);

  for(i=0;i<n1;i++)
      if (st[i]== 'r') count++;

  mul=n/n1;
  count*=mul;

  for(i=0;i<(n%n1);i++)
    if (st[i]== 'r') count++;

 printf("%d", count);

 return (0);
}
