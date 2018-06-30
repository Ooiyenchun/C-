/*
Program Name : P4Q2
Name         : Ooi Yen Chun
Date         : 13-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

void main()
{
	double centigrade, farenheit;

	//input
	printf("Enter the temperature in Centigrade : ");
	scanf("%lf", &centigrade);

	//process
	farenheit = 32 + (centigrade*180.0 / 100.0);

	//output
	printf("\nTemperature in Farenheit            : %.2f\n\n\n\n\n", farenheit);

	system("pause");
}