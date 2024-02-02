#include<stdio.h>
#include<stdlib.h>
int main()
{
float n;
float m;
printf("Enter a whole number:");
scanf("%f",&n);
printf("Enter percentage:");
scanf("%f",&m);
float z;
z=((m/100)*n);
printf("The percentage of %f is %f",n,z);
return(0);
}
