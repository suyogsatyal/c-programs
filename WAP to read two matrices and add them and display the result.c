/*
Topic: WAP to read two matrices and add them and display the result.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int row, column;
	printf("Enter number of rows and columns of matrices: ");
	scanf("%d %d", &row, &column);
	int mat1[row][column], mat2[row][column];
	system("cls");
	printf("First matrix: \n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<column;j++)
		{
			printf("Enter element for %d,%d position: ",i+1,j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	system("cls");
	printf("Second matrix: \n");
	for (int a=0;a<row;a++)
	{
		for (int b=0;b<column;b++)
		{
			printf("Enter element for %d,%d position: ",a+1,b+1);
			scanf("%d", &mat2[a][b]);
		}
	}
	system("cls");
		printf("Summed matrix: \n");
	for (int xx=0;xx<row;xx++)
	{
		for (int yy=0;yy<column;yy++)
		{
			printf("%d   ", mat1[xx][yy]+mat2[xx][yy]);
		}
		printf("\n");
	}
	
}
