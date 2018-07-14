/*
Program Name : P7Q5
Name         : Ooi Yen Chun
Date         : 14-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int userinput1,times;
	printf("Multiplication table for what number? ");
	scanf("%d", &userinput1);

	for (times = 1; times <= 12; times++)
		printf("%3d X %3d = %3d\n", userinput1, times, userinput1*times);

	system("pause");
	return 0;
}