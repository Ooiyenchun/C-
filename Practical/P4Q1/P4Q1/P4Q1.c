/*
Program Name: P4Q1
Name        : Ooi Yen Chun
Date        : 13-6-2018
*/

#include<stdlib.h>
#include<stdio.h>

#pragma warning(disable:4996)

void main()
{
	int integer1, integer2, integer3, integer4, integer5, total;
	float average;

    //Input
	printf("Enter 5 integers > ");
	scanf("%d %d %d %d %d", &integer1, &integer2, &integer3,&integer4,&integer5);

	//Process
	total = integer1 + integer2 + integer3+integer4+integer5;
	average = (float)total/ 5;

	//Output
	printf("\nTotal   = %d\n", total);
	printf("Average = %.3f\n", average);

	system("pause");

}