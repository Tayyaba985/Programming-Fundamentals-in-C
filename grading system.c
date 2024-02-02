#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("Enter numbers of subjects:\n ");
float a,b;
printf("marks in theory:\n");
scanf("%f",&a);
printf("marks in lab:\n");
scanf("%f",&b);
float total, average, percentage;
total=a+b;
average=(total/2);
percentage=((total/200)*100);
printf("Total percentage is %f\n",percentage);
     if (percentage>=90)
      {printf("The grade is A+");}
     else if((percentage>=85)&&(percentage<90))
      {printf("The grade is A");}
     else if((percentage>=80)&&(percentage<85))
      {printf("The grade is B+");}
     else if((percentage>=75)&&(percentage<80))
      {printf("The grade is B");}
     else if((percentage>=70)&&(percentage<75))
      {printf("The grade is C+");}
     else if((percentage>=65)&&(percentage<60))
      {printf("The grade is C");}
     else
      {printf("The grade is F");}
}
