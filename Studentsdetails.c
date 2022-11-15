/*
Topic:Create a structure student
having data members name, roll-number and percentage. Complete the
program to display the name of student having percentage greater than or
equal to 60.
*/
#include<stdio.h>
#include<stdlib.h>
struct details
{
	char name[20];
	int roll;
	float percent;
};
void main()
{
	int sn;
	printf("Enter the number of students whose details is to be entered: ");
	scanf("%d", &sn);
	struct details student[sn];
	for (int i=0; i<sn; i++)
	{
		printf("For student %d\n", i+1);
		printf("Enter students name: ");
		scanf("%s", &student[i].name);
		printf("Enter roll number: ");
		scanf("%d", &student[i].roll);
		printf("Enter percentage: ");
		scanf("%f",&student[i].percent);
		system("cls");
	}
	for (int j=0; j<sn; j++)
	{
		if (student[j].percent>=60.000000)
		{
			printf("Student details:\n");
			printf("Name: %s ", student[j].name);
			printf("Roll number: %d ", student[j].roll);
			printf("Percentage obtained: %f\n\n", student[j].percent);
		}
	}
}

