#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char h[]="hackerrank";
    int p=strlen(h);
    char word[30];
    int n,i,j;
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        gets(word);
        int l=strlen(word);
        int q=0;
        for(j=0;j<l;j++)
        {
          if(q<p && word[j]==h[q])
                q++;
        }
        if(q==p)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
