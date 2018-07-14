/*
Program Name : P7Q2
Name         : Ooi Yen Chun
Date         : 14-7-2018
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int n;
	do {
		printf("Give me any integer(0 to stop) : ");
		scanf("%d", &n);
		printf("The square of %d is %d\n\n", n, n*n);
	} while (n != 0);

	printf("Bye Bye\n");
}