/*
Program Name : P9Q4
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int total = 0, maxInt;;
	int col;
	double totalpercen=0;

	do {
		printf("Please enter number of integer(<=20) : ");
		scanf("%d", &maxInt);
		if (maxInt > 20)
			printf("\nToo large,please try again.\n");
	} while (maxInt > 20);

	int userint[20];
	double percen[20];
	for (col = 0; col < maxInt; col++)
	{
		printf("Please enter integer %d : ", col + 1);
		scanf("%d", &userint[col]);
		total += userint[col];
	}
	for (col= 0; col < maxInt; col++)
	{
		percen[col] = userint[col] /(double) total*100;
		totalpercen += percen[col];
	}
	printf("  n\t %% of total\n");
	printf("-----\t------------\n");
	for (col  = 0; col < maxInt; col++)
	{
		printf("%5d\t%10.2f\n", userint[col], percen[col]);
	}
	printf("-Total-------Total-\n", total, totalpercen);
	printf("%5d\t%10.2f\n", total, totalpercen);
	system("pause");
}