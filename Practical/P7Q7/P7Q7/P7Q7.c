/*
Program Name : P7Q4
Name         : Ooi Yen Chun
Date         : 14-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int result,number;

	for (number = 2; number <= 10; number += 2)
	{
		result = number * number;
		printf("The square of %d is %d\n", number, result);
	}

	system("pause");
	return 0;
}