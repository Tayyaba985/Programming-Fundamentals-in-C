#include<stdio.h>
#include<stdlib.h>
int main()
{
int i, space,row ,k;
printf("Enter number of rows:");
scanf("%d\n",&row);
for(i=1; i<=row;i++,k=0)
{
for(space=1;space<=row-i;space++)
{printf(" ");}
while(k!=2*i-1)
{printf("*");
k++;}
printf("\n");
}
return(0);
}
