#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int sum = 0, a = 2, b = 0;
	while (a < 100)
	{

		sum += (a % 5 == 0) ? a : b;

		a += 3;


	}
	printf("Sum = %d\n", sum);

	system("pause");
}