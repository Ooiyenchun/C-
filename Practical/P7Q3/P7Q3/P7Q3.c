/*
Program Name : P7Q3
Name         : Ooi Yen Chun
Date         : 14-7-2018
*/
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	int n=0;
	while (n != -999)
	{
		printf("Give me any integer(0 to stop) : ");
		scanf("%d", &n);
		printf("The cube of %d is %d\n\n", n, n*n*n);
	}

	printf("Bye Bye\n");
}