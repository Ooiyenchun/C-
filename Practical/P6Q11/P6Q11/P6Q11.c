/*
Program Name : P6Q11
Name         : Ooi Yen Chun
Date         : 30-6-2018
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int input1();
int operator();

int main()
{
	operator();
	system("pause");
	return 0;
}
int input1()
{
	int month;
	printf("Enter a day representing a month(Exp:9=September): ");
	scanf("%d", &month);

	return month;
}

int operator()
{
	int month, year,leapYearChecking;
	month = input1();

	if (1 <= month <= 12)
	{
		switch (month)
		{
		case 1:
		{
			printf("January has 31 days\n");
			break;
		}
		case 2:
		{
			printf("Enter your current year : ");
			scanf("%d", &year);
			leapYearChecking = year % 4;
			if (leapYearChecking = 0)
			{
				printf("February has 29 days.\n");
			}
			else
			{
				printf("February has 28 days.\n");
			}
			break;
		}
		case 3:
		{
			printf("March has 31 days.\n");
			break;
		}
		case 4:
		{
			printf("April has 30 days.\n");
			break;
		}
		case 5:
		{
			printf("May has 31 days.\n");
			break;
		}
		case 6:
		{
			printf("June has 30 days.\n");
			break;
		}
		case 7:
		{
			printf("July has 31 days.\n");
			break;
		}
		case 8:
		{
			printf("August has 31 days.\n");
			break;
		}
		case 9:
		{
			printf("September has 30 days.\n");
			break;
		}
		case 10:
		{
			printf("October has 31 days.\n");
			break;
		}
		case 11:
		{
			printf("November has 30 days.\n");
			break;
		}
		case 12:
		{
			printf("December has 31 days.\n");
			break;
		}
		}
	}
	else
	{
		printf("You have entered an invalid number,please try again.");
	}
	return 0;
}