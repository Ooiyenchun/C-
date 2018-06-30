/*
Program Name : P4Q5
Name         : Ooi Yen Chun
Date         : 18 Jun 2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

void main()
{
	int integer;
	double number, fractional;


	printf("Enter a floating-point number > ");
	scanf("%lf", &number);
	
	//process
	fractional = number - (int)number;
	integer = (int)number;

	printf("\n\nIts integral part     : %d\n", integer);
	printf("Its fractional part   : %f\n", fractional);

	system("pause");


}