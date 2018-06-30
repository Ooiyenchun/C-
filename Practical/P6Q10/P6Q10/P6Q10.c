/*
Program Name : P6Q10
Name         : Ooi Yen Chun
Date         : 30-6-2018
*/

#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)

int selector();
int input();

int main()
{
	selector();
	system("pause");
}

int input()
{
	int input;
	printf("Please enter a number from 0 to 6 : ");
	scanf("%d", &input);
	return input;
}
int selector()
{
	int userInput;
	userInput= input();
	if (6>=userInput>=0)
	{
		switch (userInput)
		{
		case 0:
		{
			printf("Sunday\n");
			break;
		}
		case 1:
			printf("Monday\n");
			break;
		case 2:
		{
			printf("Tuesday\n");
			break;
		}
		case 3:
		{
			printf("Wednesday\n");
			break;
		}
		case 4:
		{
			printf("Thursday\n");
			break;
		}
		case 5:
		{
			printf("Friday\n");
			break;
		}
		case 6:
		{
			printf("Saturday\n");
			break;
		}
		}
	}
	else
	{
		printf("No Such Day!!\n");
	}
	return 0;
}