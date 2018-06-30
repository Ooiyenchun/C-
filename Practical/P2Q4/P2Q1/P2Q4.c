/*
Program Name :P2Q3
Name         :Ooi Yen Chun
Date         :31-5-2018
Purpose      :Converts height from centimeters to inches
              and age of years to age in days
*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void main(void)
{
	//Variable declarations
	char    firstName[11], lastName[21];
	int     heightCM;
	double  heightIN;
	int     ageInYears, ageInDays;

	//Input
	printf("Enter your first name    : ");
	gets(firstName);

	printf("Enter your last name     : ");
	gets(lastName);

	printf("Enter your height in \"cm\" : ");
	scanf("%d", &heightCM);

	printf("Enter your age in \"years\": ");
	scanf("%d", &ageInYears);

	//Proccess
	heightIN = heightCM / 2.54;
	ageInDays = ageInYears * 365;

	//Output
	printf("\n%s %s,", firstName, lastName);
	printf("Your height is %f inches.\n", heightIN);
	printf("Your age is %d days!!!!\n", ageInDays);
	
	system("pause");
}

/*
Enter your first name    : Ooi
Enter your last name     : Yen Chun
Enter your height in "cm" : 175
Enter your age in "years": 18

Ooi Yen Chun,Your height is 68.897638 inches.
Your age is 6570 days!!!!
Press any key to continue . . .
*/