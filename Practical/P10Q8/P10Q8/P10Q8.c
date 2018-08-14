/*
Program Name : P10Q8
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int row, col, arrayData[2][5] = {2,4,6,8,10,1,3,5,7,9};
	int rowTotal[2] = { 0 }, colTotal[5] = { 0 };



	for (row = 0; row < 2; row++)
	{
		for (col = 0; col < 5; col++)
		{
			rowTotal[row] += arrayData[row][col];
			printf("%3d", arrayData[row][col]);
		}
		printf("\n");
	}
	for (col = 0; col < 5; col++)
	{
		for (row = 0; row < 2; row++)
			colTotal[col] += arrayData[row][col];
	}
	for (row = 0; row < 2; row++)
		printf("Total of Row %d\t\t:%3d\n", row + 1, rowTotal[row]);
	for (col = 0; col < 5; col++)
		printf("Total of Columm %d\t:%3d\n", col + 1, colTotal[col]);

	system("pause");
}
