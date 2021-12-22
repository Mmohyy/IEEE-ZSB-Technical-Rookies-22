#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct ss{
 char name[20];
 float deg;
}student;
student get_data(void);
int main()
{
 int i,n,j;
 student data[100];
 printf("No of students:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
      data[i]=get_data();

  for (i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
        if(data[i].deg > data[j].deg)
          {
                student temp;
                temp= data[i];
                data[i]=data[j];
                data[j]=temp;
          }
    for(i=1;i<n;i++)
        if(data[i].deg != data[0].deg && data[i].deg>= data[i+1].deg)
        printf("\n%s",data[i].name);
    return(0);
 }
student get_data(void){
 student temp;
 printf("Name:");
 scanf("%s",&temp.name);
 printf("Degree:");
 scanf("%f",&temp.deg);
 return(temp);
}
