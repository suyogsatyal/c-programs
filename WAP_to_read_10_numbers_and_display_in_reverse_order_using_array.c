/*
Topic: WAP to read 10 numbers and display in reverse order using array.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int array[10];
	for (int i=9;i>=0;i--)
	{
		printf("Enter a number: ");
		scanf("%d", &array[i]);
	}
	for (int j=0;j<=9;j++)
	{
		printf("%d, ", array[j]);
	}
	
}


