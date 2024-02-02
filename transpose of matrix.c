#include<stdio.h>
#include<conio.h>
int main()
{
	int mat[4][4], tran[4][4];
	int i, j;
	printf("Enter the elements of the 4*4 matrix\n");
	for (i = 0; i<4; i++)
		{for (j = 0; j<4; j++)
			{   printf(" array[%d][%d]:",i,j);
			    scanf("%d", &mat[i][j]);
            }
		}
	printf("Elements of the 4*4 matrix:\n");
	for (i = 0; i<4; i++)
		{for (j = 0; j<4; j++)
			{   printf(" \t%d",mat[i][j]);}
         printf("\n\n");
		}
	for (i = 0; i<4; i++)
		for (j = 0; j<4; j++)
			tran[i][j] = mat[j][i];
    printf("transpose of martix:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("\t%d ", tran[i][j]);
		printf("\n\n");
	}
	getch();
	return 0;
}
