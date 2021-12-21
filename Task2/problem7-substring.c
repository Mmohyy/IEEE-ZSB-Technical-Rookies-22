#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[20],sub[20];
    int n1,n2,i,j,c=0;
    printf("Enter the string:");
    scanf("%s",&str);
    n1= strlen(str);

    printf("Enter the substring:");
    scanf("%s",&sub);
    n2= strlen(sub);

     for(i=0;i<=n1-n2;i++)
     {
        for(j=0;j<n2;j++)
            if(str[i+j]!=sub[j]) break;

        if(j==n2) c++;
     }
     printf("\n%d",c);
    return (0);
}
