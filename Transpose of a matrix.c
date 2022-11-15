/*
Topic:Transpose of a matrix
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int row,col,mat[row][col];
	printf("Enter row and column of matrix: ");
	scanf("%d %d", &row, &col);
	for(int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			printf("Enter element of %d %d: ",i+1,j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	for(int i=0;i<col;i++)
	{
		for (int j=0;j<row;j++)
		{
			printf("%d   ", mat[j][i]);
		}
		printf("\n");
	}

}
