/*
Program Name : P7BQ3
Name         : Ooi Yen Chun
Date         : 25-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int number=1, sumOfEven=0, sumOfOdd=0;
	printf("Please enter a number(press 0 to stop)\n");

	while (number!=0)
	{
		scanf("%d", &number);
		if (number % 2 == 0)
		{
			printf("EVEN NUMBER\n");
			sumOfEven += number;
		}
		else
		{
			printf("ODD NUMBER\n");
			sumOfOdd += number;
		}
	}

	printf("\nTotal of even number : %d\n", sumOfEven);
	printf("Total of odd number  : %d\n", sumOfOdd);
	

	system("pause");

}