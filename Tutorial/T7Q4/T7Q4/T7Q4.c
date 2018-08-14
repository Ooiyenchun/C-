/*
Program Name :T7Q4
Name         : Ooi Yen Chun
Date         : 15-7-2018
*/
#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int number=2, limit,sum,testing;

	printf("Enter the limit : ");
	scanf("%d", &limit);
	printf("Even numbers :");
	while (number <= limit)
	{
		for(sum=0,testing=2;number<=limit;++number)
		{
			if (number == limit)
				printf(" %d\n", number);
			else
				printf(" %d,", number);
			sum += number;
		}
	}
	printf("The sum is %d\n", sum);
	printf("Testing=%d\n", testing);
	system("pause");
}