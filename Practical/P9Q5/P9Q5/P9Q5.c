/*
Program Name : P9Q5
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#pragma warning(disable:4996)

void main()
{
	int num[30],col,counter=0,smallest=0;
	int sum=0;

	for (col = 0; col < 30; col++)
	{
		num[col] =-50+rand()%100;
	}
	//a
	printf("Random value\t:");
	for (col = 0; col < 10; col++)
		printf("%4d", num[col]);

	printf("\n\nOdd value\t:");

	counter = 0;
	//B
	for (col = 0; counter < 10; col++)
	{
		if (num[col] % 2 != 0)
		{
			printf("%4d", num[col]);
			counter++;
		}
	}
	printf("\n\nOdd numbered\t:");
	counter = 0;
	//C
	for (col = 0; counter < 10; col++)
	{
		if (col % 2 != 0)
		{
			printf("num[%d] ", col);
			counter++;
		}
	}
	printf("\nindex elements");
	printf("\n\nEven values\t:");
	counter = 0;
	//D
	for (col = 0; counter < 10; col++)
	{
		if (num[col] % 2 == 0)
		{
			printf("%4d", num[col]);
			counter++;
		}
	}
	//e
	for (col = 0; col < 30; col++)
	{
		sum += num[col];
	}
	printf("\n\nSum\t\t:%4d", sum);

	//f
	for (col = 0; col < 30; col++)
	{
		if (num[col] < num[smallest])
			col = smallest;
	}
	printf("\n\nSmallest value\t\t:%4d[%d]\n", num[smallest], smallest);

	system("pause");
}