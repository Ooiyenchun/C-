/*
Program Name : P11Q3
Name		 : Ooi Yen Chun
Date		 : 14-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int userInput;
	printf("Please enter an integer :");
	scanf("%d", &userInput);
	
	if (userInput & 1)
	{
		printf("ODD\n");
	}
	else
	{
		printf("EVEN\n");
	}
	system("pause");
}