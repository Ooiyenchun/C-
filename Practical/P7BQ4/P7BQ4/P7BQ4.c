/*
Program Name : P7BQ4
Name		 : Ooi Yen Chun
Date		 : 26-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

void main()
{
	int num1, num2, largestNum, smallestNum, Num, sumEven = 0, sqrOdd = 0;


	printf("Please enter two integer in a b : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		largestNum = num1;
		smallestNum = num2;
	}
	else
	{
		largestNum = num2;
		smallestNum = num1;
	}

	//Display odd number
	printf("The odd numbers between %d and %d are\t: ", smallestNum, largestNum);
	for (Num = smallestNum; Num <= largestNum; Num++)
	{
		if (Num % 2 != 0)
		{
			printf("%d ", Num);
		}
	}

	//Display sum of even
	printf("\nThe sum of the even numbers are\t\t: ");
	for (Num = smallestNum; Num <= largestNum; Num++)
	{
		if (Num % 2 == 0)
			sumEven += Num;

	}
	printf("%d\n", sumEven);

	printf("The sum of squares of odd numbers are\t: ");
	for (Num = smallestNum; Num <= largestNum; Num++)
	{
		if (Num % 2 != 0)
			sqrOdd += pow(Num, 2);
	}
	printf("%d\n", sqrOdd);


	system("pause");
}