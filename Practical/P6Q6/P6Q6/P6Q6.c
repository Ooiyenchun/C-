/*
Program Name :P6Q6
Name         : Ooi YEn Chun
Date         : 30-6-2018
*/

#include <stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void display();
int calculation();
int userInput();

int main()
{
	display();
	system("pause");
	return 0;
}
void display()
{
	double result;
	result = calculation();
	if (result >= 0)
	{
		printf("Your income this month is %.2f\n", result);
	}
}
int calculation()
{
	double sales,income;
	sales = userInput();

	if (sales < 0)
	{
		printf("You have enter an invalid number,please try again\n");
		return 0;
	}
	else if (sales >= 50000)
	{
		income = 375 + 0.16*sales;
	}
	else if (sales >= 40000)
	{
		income = 350 + 0.14*sales;
	}
	else if (sales >= 30000)
	{
		income = 325 + 0.12*sales;
	}
	else if (sales >= 20000)
	{
		income = 300 + 0.09*sales;
	}
	else if (sales >= 10000)
	{
		income = 250 + 0.05*sales;
	}
	else
	{
		income = 200 + 0.03*sales;
	}
	return income;
}
int userInput()
{
	double sales;
	printf("Please enter your sales this month : ");
	scanf("%lf", &sales);
	return sales;
}
