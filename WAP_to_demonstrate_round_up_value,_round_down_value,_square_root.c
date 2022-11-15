/*
Topic: WAP to demonstrate round up value, round down value, square root, power,
absolute value, of given number using built-in functions.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	float num;
	printf("Enter a decimal number: ");
	scanf("%f", &num);
	printf("Rounded up: %.2f \nRounded down: %.2f \nSquare root: %.2f \nPowered 3: %.2f" , ceil (num), floor(num), sqrt(num), pow(num,3.0));
}

