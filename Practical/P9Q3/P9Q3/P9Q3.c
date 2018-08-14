/*
Program Name : P9Q3
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int arrX[10] = { 3,5,-1,0,-10,9,2,6,6,13 };
	int arrY[10] = { 2,9,7,-5,2,3,1,8,-11,6 };
	int prodXY[10];
	int row,process;

	for (row = 0; row < 10; row++)
		prodXY[row] = arrX[row] * arrY[row];

	printf("arrX\tarrY\tprodXY\n");
	printf("====\t====\t======\n");
	for (row = 0; row < 10; row++)
		printf("%3d\t%3d\t%4d\n", arrX[row], arrY[row], prodXY[row]);


	system("pause");
}