#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("Enter a starting number:");
scanf("%d",&a);
printf("Enter an end number:");
scanf("%d",&b);
if (a>b)
{for(int i=a;i<=b;i++)
{for(i%2==0)
{printf("%d",i);}}
return(0);}
else
{for(int i=b;i<=a;i++)
{for(i%2==0)
{printf("%d",i);}}
return(0);}
}
