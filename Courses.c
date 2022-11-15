/*
Topic:Create a structure named
course with name, code and credit_hour as its member. Write a program
using this structure to read data of 5 courses and display data of those
courses with credit_hour grater than 3.
*/
#include<stdio.h>
#include<stdlib.h>
struct structure
{
	int code;
	int credithrs;
	char name[20];
}; 
void main()
{	
	int i;
	struct structure course[5];
	for (i=0; i<5; i++)
	{
		printf("Enter course details:\n\nEnter name: ");
		scanf("%s", &course[i].name);
		printf("Enter course code: ");
		scanf("%d", &course[i].code);
		printf("Enter credit hours: ");
		scanf("%d", &course[i].credithrs);
		printf("\n\n");
	}
	printf("\nCourses with more than 3 credit hours: \n");
	for (int j=0; j<5; j++)
	{
		if (course[j].credithrs>3)
		{
			printf("\nName: %s\nCode no: %d\nCredit hours: %d\n\n", course[j].name, course[j].code, course[j].credithrs);
		}
	}
}

