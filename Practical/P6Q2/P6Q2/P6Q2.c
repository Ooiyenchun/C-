/*
Program Name : P6Q2
Name         : Ooi Yen Chun
Date         : 27-6-2018
*/

#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)

int input1;

int main()
{
	printf("Enter an integer : ");
	scanf("%d", &input1);

	if (input1 == 0)
	{
		printf("You have input zero.\n\n");
	}

	else if (input1 % 2 == 0)
	{
		printf("\n%d is an even number\n\n", input1);

	}
	else
	{
		printf("\n%d is an odd number\n\n", input1);
	}

	system("pause");
	return 0;
}
