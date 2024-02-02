#include<stdio.h>
#include<stdlib.h>
int main ()
{
int num1, num2;
int GCD=1;
printf("This program finds the GCDof two user entered number:\n\n");
printf("Enter number1:");
scanf("%d", &num1);
printf("Enter number2:");
scanf("%d", &num2);
int small_num=num2;
if(num1<num2)
small_num=num1;
for(int i=1;i<= small_num; i++)
{
if((num1%i==0)&&(num2%i==0))
GCD=i;
}
printf("\n The GCD of %d and %d is %d",num1,num2,GCD);
return 0;
getchar();
}
