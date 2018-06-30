/*
Program Name :P2Q3
Name         :Ooi Yen Chun
Date         :31-5-2018
Purpose      :Converts height from centimeters to inches.
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

	//Input
	printf("Enter your first name    : ");
	gets(firstName);

	printf("Enter your last name     : ");
	gets(lastName);

	printf("Enter your height in \"cm\" : ");
	scanf("%d", &heightCM);

	//Proccess
	heightIN = heightCM / 2.54;

	//Output
	printf("\n%s %s,", firstName, lastName);
	printf("Your height is %f inches.\n", heightIN);
	
	system("pause");
}

/*
Enter your first name    : Ooi
Enter your last name     : Yen Chun
Enter your height in "cm" : 175cm

Ooi Yen Chun,your height is 68.897638 inches.
Press any key to continue . . .*/