/*
Program Name : P7Q8
Name         : Ooi Yen Chun
Date         : 15-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, sum = 0;

	for (i = 0; i <= 4; i++)
	{
		printf("i = %d\tsum = %d\n", i, sum += i);
	}

	system("pause");
}