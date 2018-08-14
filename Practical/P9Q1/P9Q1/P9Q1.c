/*
Program Name : P9Q1
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int bArray[5] = { 1, 2, 3, 4, 5 };
	int col;

	for (col = 0; col < 5; col++)
		printf("%d ", bArray[col]);
	printf("\n");

	for (col = 0; col < 5; col++)
		bArray[col] = bArray[col] + 10;

	for (col = 0; col < 5; col++)
		printf("%d ", bArray[col]);

	printf("\n");
	system("pause");
	
}

