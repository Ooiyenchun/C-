/*
Program Name : P6Q7
Name         : Ooi Yen CHun
Date         : 5-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int processor();

int main()
{
	processor();
	system("pause");

	return 0;
}

int processor()
{
	int firstInt, secondInt, thirdInt;
	printf("Please enter 3 integer in the form of a b c : ");
	scanf("%d %d %d", &firstInt, &secondInt, &thirdInt);

	if (firstInt < secondInt&&firstInt<thirdInt)
		printf("\n%d is the smallest compare to %d and %d.\n", firstInt, secondInt, thirdInt);
	else if (secondInt < firstInt&&secondInt<thirdInt)
		printf("\n%d is the smallest compare to %d and %d.\n", secondInt, firstInt, thirdInt);
	else if (thirdInt < firstInt&&thirdInt<secondInt)
		printf("\n%d is the smallest compare to %d and %d.\n", thirdInt, firstInt, secondInt);

	return 0;
}