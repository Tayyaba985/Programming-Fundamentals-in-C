#include<stdio.h>
#include<stdlib.h>
int main()
{
int N;
printf("Enter number:");
scanf("%d",&N);
if(N<2)
  {
    printf("The number %d is not prime!\n,N");
    return(0);
  }
for (int i=2; i<N; i++)
  {
     if((N%i)==0)
     { printf("The number %d is not prime!\n",N);
     return (0);}
   }
printf (" The number %d is prime!\n",N);
getchar();
return (0);
}
