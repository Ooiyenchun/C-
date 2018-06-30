/*
Program Name : P4Q6
Name         : Ooi Yen Chun
Date         : 18-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable :4996)

void main()
{
	int int1, lastNumber, twoLastNumber, threeLastNumber;

	printf("Enter a 4-digit integer > ");
	scanf("%d", &int1);

	lastNumber = int1 % 10;
	twoLastNumber = int1 % 100;
	threeLastNumber = int1 % 1000;

	printf("\n %d", lastNumber);
	printf("\n %d", twoLastNumber);
	printf("\n %d", threeLastNumber);
	printf("\n %d\n", int1);

	system("pause");
}