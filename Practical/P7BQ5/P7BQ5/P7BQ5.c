/*
Program Name : P7BQ5
Name		 : Ooi Yen Chun
Date		 : 26-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable : 4996)


int main()
{
	int number, numBackwards;
	printf("Enter a positive integer : ");
	scanf("%d", &number);
	printf("\n\n");
	for (numBackwards = number; numBackwards>0;number /= 10)
	{
		numBackwards = number % 10;
		if(numBackwards<number)
		printf("%d,", numBackwards);
		else
		{
			printf("%d\n", numBackwards);
			break;
		}
	}


	system("pause");
	return 0;
}