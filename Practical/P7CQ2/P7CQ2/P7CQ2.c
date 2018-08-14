/*
Program Name : P7CQ2
Name		 : Ooi Yen Chun
Date		 : 29-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int counter, marks[],total = 0;
	double average;

	for (counter = 0; counter <= 2; counter++)
	{
		printf("Marks of subject %d : ",counter+1);
		scanf("%d", &marks[counter]);
		total +=marks[counter];
	}

	average = total / 3;

	printf("\n\nYour total marks\t=\t%d\n", total);
	printf("Your average is\t\t=\t%.2f\n", average);
	system("pause");
}