/*
Program Name : P10Q6
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	const int SIZE = 10;
	int myArray[10] = { 10,2,7,4,1,6,3,5,9,8 },temp,row,correct=0;
	printf("Original Order\t:");
	for (row = 0; row < 10; row++)
		printf("%3d", myArray[row]);
	printf("\n");
	while (correct+1 != SIZE)
	{
		correct = 0;
		for (row = 0; row <=8; row++)
		{
			if (myArray[row] > myArray[row + 1])
			{
				temp = myArray[row+1];
				myArray[row + 1] = myArray[row];
				myArray[row] = temp;
			}
			else
				++correct;
		}
	}
	printf("Ascending Order\t:");
	for (row = 0; row < 10; row++)
	printf("%3d", myArray[row]);
	printf("\n");
	printf("Decending Order\t:");
	for (row = 9; row >= 0; row--)
		printf("%3d", myArray[row]);
	printf("\n");

	system("pause");
}