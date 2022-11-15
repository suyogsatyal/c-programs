/*
Topic:Facrorial of a function using recursive function.
*/
#include<stdio.h>
#include<stdlib.h>
int factorial();
void main()
{
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);
	printf("%d", factorial(input));
}
int factorial(int num)
{
	if(num>1)
	{return num*factorial(num-1);}
	else
	{return 1;}
	
	//um==0 or num==1? return 1; return num*factorial(num-1);
}


