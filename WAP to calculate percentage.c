
/*
Topic:WAP to calculate percentage
obtained by a student using user-defined function. Pass the array of 5 subject
marks as function argument.
*/
#include<stdio.h>
#include<stdlib.h>
float percentage();
void main()
{
	float array[5];
	for (int i=0; i<5; i++)
	{
		printf("Enter marks for %d subject: ",i+1);
		scanf("%f", &array[i]);
	}
	float result=percentage(array);
	printf("You got %.2f pecentage.", result);
}
float percentage(float marks[5])
{
	float obtained;
	for(int j=0; j<5; j++)
	{
		obtained=obtained+marks[j];
	}
	float total=obtained/500*100;
	return total;
}
