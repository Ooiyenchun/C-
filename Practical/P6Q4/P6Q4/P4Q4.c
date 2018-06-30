/*
Project Name : P6Q4
Name         : Ooi Yen Chun
Date         : 29-06-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int amountHour();
int display();

int main()
{
	display();

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

int display()
{

	int StandardHour = 40, OTpayment = 9.00, NonOTpayment = 6.00, hour;
	double Total;
	hour = amountHour();


	if (hour> StandardHour)
	{
		Total = (hour - StandardHour)*OTpayment + StandardHour * NonOTpayment;
		printf("\nThe payment you will received is RM %.2f.Thank you for your service!\n\n", Total);

	}
	else if (hour <= 0)
	{
		printf("\nYou enter an invalid number.Please try again.\n\n");
	}
	else if (hour <= StandardHour)
	{
		Total = hour * NonOTpayment;
		printf("\nThe payment you will received is RM %.2f.Thank you for your service!\n\n", Total);

	}

	return 0;
}


