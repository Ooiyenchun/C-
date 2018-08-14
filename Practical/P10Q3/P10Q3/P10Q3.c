/*
Program Name : P10Q3
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

void main()
{
	char password[9] = "password",userinput[9];
	printf("Enter password : ");
	scanf("%s", &userinput);

	if (strcmp(password, userinput) == 0)
		printf("\nWELCOME TO PCD1 !\n");
	else
	{
		printf("\nACCESS DENIED!!\n");
	}
		system("pause");
	
}