#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[25], a, i, count = 0;
	for (i = 0; i<25; i++)
	{printf("Enter number : ");
     scanf("%d", &arr[i]);
	}
	printf("\n\nEnter the number you want to search : ");
	scanf("%d", &a);
	for (i = 0; i<25; i++)
	{if (arr[i] == a)
     count++;
	}
	if (count)
		printf("\n\n%d is present in the data %d times.", a, count);
	else
		printf("\n\n%d is not present in the data.", a);
	getch();
