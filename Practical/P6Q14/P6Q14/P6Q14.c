/*
Program Name : P6Q14
Name         : Ooi Yen Chun
Date         : 4-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)


int operator();
int numberOfDays();

int main()
{
	numberOfDays();
	system("pause");
	return 0;
}

int operator()
{   
	int day, month, year;
	int jan = 31, feb = 28, mar = 31, april = 30, may = 31, jun = 30, july = 31, aug = 31, sept = 30, oct = 31, nov = 30, dec = 31;
	int totalDays=0;
	printf("Please enter a date at the format of dd mm yyyy : ");
	scanf("%d %d %d", &day, &month, &year);

	//If Leap year 
	if (year % 4 == 0)
		++feb;

	//Value adding
	if (month > 0)
		totalDays += day;
	if (month > 1)
		totalDays += jan;
	if (month > 2)
		totalDays += feb;
	if (month > 3)
		totalDays += mar;
	if (month > 4)
		totalDays += april;
	if (month > 5)
		totalDays += may;
	if (month > 6)
		totalDays += jun;
	if (month > 7)
		totalDays += july;
	if (month > 8)
		totalDays += aug;
	if (month > 9)
		totalDays += sept;
	if (month > 10)
		totalDays += oct;
	if (month > 11)
		totalDays += nov;
	if (month == 0 || month > 12)
	{
		printf("You have enter an invalid number,please try again.\n");
		totalDays = 0;
	}
	if (totalDays != 0)
		printf("You have entered %d %d %d", day, month, year);
	return totalDays;
}
int numberOfDays()
{
	int amountDays = operator();
	if (amountDays!=0)
	printf(",which is number %d days in the year.\n", amountDays);

	return 0;
}