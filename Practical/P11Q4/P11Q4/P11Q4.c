/*
Program Name : P11Q4
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

	userInput >>= 1;
	userInput <<= 1;
	printf("\n%d is the new number.\n",userInput);
	system("pause");
}