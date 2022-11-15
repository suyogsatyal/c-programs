/*
Topic: WAP to read a string and display in reverse order.
DOESNOT WORK!
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i, len=100;
	char arr[len];
	printf("Enter a string: ");
	scanf("%s", &arr);
	len=strlen(arr);
	len--;
	for (len;len>=0;len--)
	{
		printf("%c", arr[len]);
	}
}
