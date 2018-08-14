/*
Program Name : P7BQ8
Name		 : Ooi Yen Chun
Date		 : 28-7-2018
*/


#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#pragma warning(disable:4996)

void main()
{
	int userInput, counter, checker = 0;
	char repeater='Y';

	while(repeater=='Y')
	{
	printf("\n\nPlease enter an integer : ");
	scanf("%d", &userInput);
		if (userInput <= 2)
		{
			checker = 0;
			if (userInput == 2)
				checker = 1;
		}
		else
		{
			for (counter = userInput - 1; counter >= 2; counter--)
			{
				if (userInput%counter == 0)
				{
					checker = 0;
					break;
				}
				else
					checker = 1;
			}
		}


		if (checker == 1)
			printf("%d is a prime number.\n", userInput);
		else
			printf("%d is not a prime number.\n", userInput);
		rewind(stdin);
		printf("Do you want to check other number ?\nType y for yes and other for no : ");
		scanf("%c", &repeater);
		repeater = toupper(repeater);
	}
}