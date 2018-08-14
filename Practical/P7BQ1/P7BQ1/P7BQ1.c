/*
Program Name : P7BQ1
Name         : Ooi Yen Chun
Date         : 25-7-2018
*/


#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)


void main()
{
	int integer,range1=0,range2=0,range3=0,range4=0,errorcounter=0,counter;

	printf("Please enter 10 integer.\n");

	for (counter = 1; counter <= 10; counter++)
	{
		scanf("%d", &integer);

		if (integer < 1 || integer>200)
			errorcounter++;
		if (integer <= 50)
			range1++;
		else if (integer <= 100)
			range2++;
		else if (integer <= 150)
			range3++;
		else if (integer <= 200)
			range4++;
	}
	printf("==RANGE=======AMOUNT=========\n");
	printf("0  - 50\t\t%d\n",range1);
	printf("51 - 100\t%d\n", range2);
	printf("101- 150\t%d\n", range3);
	printf("151- 200\t%d\n", range4);
	printf("Invalid input\t%d\n", errorcounter);

	system("pause");

}