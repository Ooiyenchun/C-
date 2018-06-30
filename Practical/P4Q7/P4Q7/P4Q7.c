/*
Program Name : P4Q7
Name         : Ooi Yen Chun
Date         : 18-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int number, firstDigit, secondDigit, thirdDigit, fourthDigit;

	printf("Enter a 4-digit integer > ");
	scanf("%d", &number);
	
	//process
	firstDigit = number / 1000;
	secondDigit = (number / 100)%10;
	thirdDigit= (number/10)%10;
	fourthDigit = number % 10;

	printf("\n1st digit : %d", firstDigit);
	printf("\n2nd digit : %d", secondDigit);
	printf("\n3rd digit : %d", thirdDigit);
	printf("\n4rd digit : %d\n", fourthDigit);

	system("pause");
}