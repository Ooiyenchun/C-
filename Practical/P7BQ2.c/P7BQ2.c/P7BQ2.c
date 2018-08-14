/*
Program Name : P7BQ2
Name         : Ooi Yen Chun
Date         : 25-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int numOfOdd, counter = 1, oddNumber = 1, total=0;

	printf("Please enter a positive integer : ");
	scanf("%d", &numOfOdd);
	for ( ; counter <= numOfOdd; counter++)
	{
		if (numOfOdd != counter)
			printf("%d + ", oddNumber);
		else
		{
			printf("%d = ", oddNumber);
		}
		total += oddNumber;
		oddNumber += 2;
	}
	printf("%d\n", total);

	system("pause");
}