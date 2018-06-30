/*
Program Name : P6Q3
Name         : Ooi Yen Chun
Date         : 27-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)


int main()
{
	int numYrs;
	double rate1 = 0.075, rate2 = 0.054, totalInterest,totalSaving;

	printf("Enter the number of having saving ain bank : ");
	scanf("%d", &numYrs);
	if (numYrs >= 5)
	{
		printf("\nYour current interest rate is 7.5%% per year\n");
		printf("What is your current in bank?\nPlease enter in RM ");
		scanf("%lf", &totalSaving);
		totalInterest = rate2 * totalSaving;
		printf("Interst you earned in this year is RM %.2f\n", totalInterest);
	}
	else if(0<numYrs<5)
	{
		printf("\nYour current interest rate is 5.4%% per year\n");
		printf("What is your current in bank?Please enter in RM ");
		scanf("%lf", &totalSaving);
		totalInterest = rate1 * totalSaving;
		printf("Interest you earned in this year is RM %.2f\n", totalInterest);
	}
	else
	{
		printf("Your didn't have any saving in our bank.\n");
	}
	system("pause");
	return 0;
}