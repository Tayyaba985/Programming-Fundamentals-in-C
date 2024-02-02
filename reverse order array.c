#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[5], arr2[5],j,i;
    printf("Enter 5 elements of array\n");
	for (i = 0; i<=4; i++)
		scanf("%d",&arr1[i]);
    for(i=0,j=4;i<=4;i++,j--)
     arr1[j]=arr2[i];
	printf("\nElements in reverse order");
	for (i = 0; i < 5; i++)
		printf("%d ", arr2[i]);
 getch();
