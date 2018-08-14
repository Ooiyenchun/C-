/*
Program Name : P7Q6
Name         : Ooi Yen Chun
Date         : 15-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

void main()
{
	int i, n, d;
	printf("Enter a positive integer: : ");
	scanf("%d", &n);
	for (i = 1; i <= n * 2; i++)
	{
		d = (n * 2 - 1) - abs(n - i);
		printf("%d", d);
		printf("\n");
	}
	

	system("pause");
}