/*
Topic: Concatination using loop
*/
#include<stdio.h>
#include<string.h>
void main()
{
	int len1=100, len2=100, len3;
	char string1[len1], string2[len2];
	printf("Enter two strings: ");
	scanf("%s %s", &string1, &string2);
	len1=strlen(string1);
	len2=strlen(string2);
	len3=len1+len2;
	char string3[len3];
	int j=len1;
	for(int i=0;i<len1;i++)
	{
		string3[i]=string1[i];
	}
	for (j;j<len3;j++)
	{
	    static int k=0;
		string3[j]=string2[k];
		k++;
	}	
		printf("\n%s", string3);
}
