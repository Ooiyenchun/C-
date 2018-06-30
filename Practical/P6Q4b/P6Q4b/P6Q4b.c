/*
Project Name : P6Q4
Name         : Ooi Yen Chun
Date         : 29-06-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int amountHour();
int calculation();

int main()
{
	int hour;
	double totalPayment;
	totalPayment = calculation();

	if(hour>0)
    printf("\n\nThe payment you will received is RM %.2f.Thank you for your service!\n", totalPayment);
	system("pause");
	return 0;
}

int amountHour()
{
	int hour;

	printf("Please enter amount of hour working per week: ");
	scanf("%d", &hour);
	return hour;
}

int calculation()
{

	int StandardHour = 40, OTpayment = 9.00, NonOTpayment = 6.00, hour;
	double Total;
	hour = amountHour();

	if (hour> StandardHour)
	{
		Total = (hour - StandardHour)*OTpayment + StandardHour * NonOTpayment;

	}
	else if (hour <= 0)
	{
		printf("You enter an invalid number.Please try again.\n");
	}	
	else if (hour <= StandardHour)
	{
		Total = hour * NonOTpayment;

	}

	return Total;
}

