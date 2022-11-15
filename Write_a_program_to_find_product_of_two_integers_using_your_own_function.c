/*
Topic: Write a program to find product of two integers using your own function.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Product: %d",pro(a,b));
}
int pro(int a, int b)
{
	return a*b;
}


