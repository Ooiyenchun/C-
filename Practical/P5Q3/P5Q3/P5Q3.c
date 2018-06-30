/*
Program name : P5Q3
Name         : Ooi Yen Chun
Date         : 24-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)
#include<math.h>

void main()
{
	double distance, x1, y1, x2, y2;


	//INPUT
	printf("Enter the x coordinate and y coordinate of first point in x y\n");
	scanf("%lf %lf", &x1, &y1);

	printf("Enter the x coordinate and y coordinate of second point in  x y\n");
	scanf(" %lf %lf", &x2, &y2);

	//PROCESS
	distance = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

    //OUTPUT
	printf("\n\nThe distance between two point is %f\n", distance);

	system("pause");
}
