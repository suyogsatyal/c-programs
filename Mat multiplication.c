/*
Topic: Matrix multiplication
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int row1, row2, column1, column2;
	printf("Enter number of rows and columns of first matrix: ");
	scanf("%d %d", &row1, &column1);
	printf("Enter number of rows and columns of second matrix: ");
	scanf("%d %d", &row2, &column2);
	if(column1==row2)
	{
			int mat1[row1][column1], mat2[row2][column2], pro[row1][column2];
	system("cls");
	printf("First matrix: \n");
	for (int i=0;i<row1;i++)
	{
		for (int j=0;j<column1;j++)
		{
			printf("Enter element for %d,%d position: ",i+1,j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	system("cls");
	printf("Second matrix: \n");
	for (int a=0;a<row2;a++)
	{
		for (int b=0;b<column2;b++)
		{
			printf("Enter element for %d,%d position: ",a+1,b+1);
			scanf("%d", &mat2[a][b]);
		}
	}
	system("cls");
		for (int x=0;x<row1;x++)
		{
			for (int y=0;y<column2;y++)
			{
				for (int z=0;z<column1;z++)
				pro[x][y]+=mat1[x][z]*mat2[z][y];
				printf("%d   ", pro[x][y]);
			}
			printf("\n");
		}
	}
	else
	{
	printf("Uncalculatable!!!");
	}
}
