/*
Program Name : P6Q5
Name         : Ooi Yen Chun
Date         : 29-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int CreditHour();
int Calculation();

int main()
{
	Calculation();
	system("pause");
	return 0;
}
int CreditHour()
{
	int hour;
	printf("Please enter the number of credit hour you completed : ");
	scanf("%d", &hour);
	return hour;
}

int Calculation()
{
	int freshmanLowest = 0, sophomoreLowest = 45, juniorLowest = 90, seniorlowest = 135,totalHour;
	totalHour = CreditHour();

	if (totalHour >=seniorlowest)
	{
		printf("\nYour ranking is Senior.\nHappy Studying!\n");
	}
	else if(totalHour>=juniorLowest)
	{
		printf("\nYour ranking is Junior.\nHappy Studying!\n");
	}
	else if (totalHour >= sophomoreLowest)
	{
		printf("\nYour ranking is Sophomore.\nHappy Studying!\n");
	}
	else if (totalHour >=freshmanLowest)
	{
		printf("\nYour ranking is Freshman.\nHappy Studying!\n");
	}
	else
	{
		printf("Wrong input,please try again!");
	}
	return 0;
}
