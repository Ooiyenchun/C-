/*
Program Name : P11Q2
Name		 : Ooi Yen Chun
Date		 : 14-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int shiftvalue, userInput, temp, a,shiftedvalue;
	printf("Enter a decimal number : ");
	scanf("%d", &userInput);
	printf("Enter number of places to shift bit : ");
	scanf("%d", &shiftvalue);

	printf("\tnumber\t\t: ");
	for (a = 7; a >= 0; a--)
	{
		temp = userInput >> a;
		if (temp & 1)
			printf("1");
		else
			printf("0");
	}
	shiftedvalue =userInput<< shiftvalue;
	printf("\n\tLeft Shifted\t: ");
	for (a = 7; a >= 0; a--)
	{
		temp = shiftedvalue >> a;
		if (temp & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n\tRight Shifted\t: ");
	shiftedvalue = userInput >> shiftvalue;
	for (a = 7; a >= 0; a--)
	{
		temp = shiftedvalue >> a;
		if (temp & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	system("pause");
}