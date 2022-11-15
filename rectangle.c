/*
Topic: Create a structure rectangle with data member length and
breadth, and display the area of rectangle.
*/
#include<stdio.h>
#include<stdlib.h>
struct structure
{
	int length;
	int breadth;
}rectangle;
void main()
{
	printf("Enter dimensions of a rectangle: \nEnter length: ");
	scanf ("%d", &rectangle.length);
	printf("Enter bredth: ");
	scanf ("%d", &rectangle.breadth);
	int area=rectangle.breadth*rectangle.length;
	printf("Area of rectangle is %d sq. units", area);
}
