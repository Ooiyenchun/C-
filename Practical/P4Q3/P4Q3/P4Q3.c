/*
Program Name : P4Q3
Name         : Ooi Yen Chun
Date         : 13-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int hours, minutes;
	float payment;

	//Input
	printf("==============\nCYBER CAFE ABC\n==============\nPlease enter your usage in following format <hour> <minutes> : ");
	scanf("%d %d", &hours, &minutes);

	//Process
	payment = (3 * hours) + (minutes / 60 * 3);

	//Output
	printf("\n\n\n\n\n--------------------------------------------\n");
	printf("Total payment = RM%.2f\n", payment);
	printf("--------------------------------------------\n");

	system("pause");
}