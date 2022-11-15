/*
Topic:WAP to read five subject marks and display the total and
percentage obtained using array.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int array[5], total;
	float percentage;
	for(int i=0;i<5;i++)
	{
		printf("Enter marks of %d subject: ", i+1);
		scanf("%d", &array[i]);
	}
	for (int j=0;j<5;j++)
	{
		total=total+array[j];
	}
	percentage=total/500.0*100;
	printf("Total: %d and Percentage= %.2f", total, percentage);
}

