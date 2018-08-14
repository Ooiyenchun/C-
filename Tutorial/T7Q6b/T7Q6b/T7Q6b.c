/*
Program Name : T7Q6b
Name         : Ooi Yen Chun
Date         : 15-7-2018
*/
#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int a=2,sum=0;

	while (a <= 100)
	{
		if (a % 5 == 0)
		{
			sum += a;
		}
		a+=3;
	}
	printf("Sum = %d\n", sum);
	system("pause");
}