/*
Program Name : P5Q2
Name         : Ooi Yen Chun
Date         : 20-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
#define PI 3.14159

void main()
{
	double input, result,sinx,cosx,tanx,radians;
	printf("Enter the value of x : ");
	scanf("%lf", &input);

	radians = input * PI / 180;
	sinx=sin(radians);
	cosx=cos(radians);
	tanx=tan(radians);
	printf("\nsin x = %.3f\ncos x = %.3f\ntan x = %.3f\n",sinx,cosx,tanx);

	system("pause");

}