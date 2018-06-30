/*
Program Name : P6Q1
Name         : 28-6-2018
Date         : 28-6-2018*/

#include <stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)
int input1;

int main()
{
	printf("Enter an integer : ");
	scanf("%d", &input1);

	if (input1 % 3 == 0)
	{
		printf("\n%d is a multiple of 3\n\n\n",input1);
	}
	else
	{
		printf("\n%d is not a multiple of 3\n\n\n",input1);
	}

	system("pause");

	return 0;
}