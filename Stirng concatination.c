/*
Topic: Stirng concatination
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int len1=100, len2=100;
	char str1[len1], str2[len2];
	printf("Enter two strings: ");
	scanf("%s %s", &str1, &str2);
	strcat(str1, str2);
	printf("%s", str1);
}
