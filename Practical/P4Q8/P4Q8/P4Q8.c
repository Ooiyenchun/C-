/*
Program Name : P4Q8
Name         : Ooi Yen Chun
Date         : 18-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int int1, thousands, hundreds, tens, ones;

	printf("Enter a 4-digit integer > ");
	scanf("%d", &int1);

	ones = int1 % 10;
	tens = int1 % 100 - ones;
	hundreds = int1 % 1000 - tens - ones;
	thousands = int1 - hundreds-tens-ones;

	printf("\n%d = %d + %d + %d + %d\n", int1, thousands, hundreds, tens, ones);

	system("pause");

}