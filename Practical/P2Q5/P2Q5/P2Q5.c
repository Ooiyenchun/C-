/*
Program Name :P2Q5
Name         :Ooi Yen Chun
Date         :1-6-2018
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
#define PI 3.14153 //PI has a constant fixed value

void main()
{
	//input
	double area,circumference,radius;
		printf ("Enter your radius : ");
		scanf("%lf", &radius);
	//proccess
		area = PI * radius*radius;
		circumference = 2 * PI*radius*radius;

	//output
		printf("Area              : %.2f\n", area);
		printf("Circumference     : %.2f\n", circumference);

		system("pause");
}

/*
Enter your radius.100
area=31415.30
circumference=62830.60
Press any key to continue . . .*/