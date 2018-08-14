/*
Program Name : P10Q7
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int userInput[2][4], row, col, highest=0, lowest='\0';

	for (row = 0; row < 2; row++)
		for (col = 0; col < 4; col++)
		{
			printf("Integer for row%3d columm%3d : ", row + 1, col + 1);
			scanf("%d", &userInput[row][col]);

		}
	lowest = userInput[0][0];
	for (row = 0; row < 2; row++)
		for (col = 0; col < 4; col++)
		{
			if (userInput[row][col] > highest)
				highest = userInput[row][col];
			if (userInput[row][col] < lowest)
				lowest = userInput[row][col];
		}
	printf("\n\tColumm1\tColumm2\tColumm3\tColumm4\n");
	for (row = 0; row < 2; row++)
	{
		printf("Row %d", row + 1);
		for (col = 0; col < 4; col++)
			printf("\t%5d", userInput[row][col]);
		printf("\n");
	}
	printf("\nHighest Value\t:%5d", highest);
	printf("\nLowest Value\t:%5d\n", lowest);

	system("pause");
}