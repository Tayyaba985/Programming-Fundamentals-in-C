#include<stdio.h>
#include<stdlib.h>
int main()
{
int i, j , row ;
printf("Enter number of rows");
scanf("%d",&row);
for(i=1;i<=row;i++)
{for(j=1;j<=i;j++)
 {printf("%d",j);}
 printf("\n");}
 return(0);
}
