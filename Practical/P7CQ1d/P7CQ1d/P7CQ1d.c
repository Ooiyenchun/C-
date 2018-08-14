/*
Program Name : P7CQ1d
Name		 : Ooi Yen Chun
Date		 : 29-7-2018
*/

#include<stdlib.h>
#include<stdio.h>

void main()
{
	int x, y,counter;

	for (counter = 0, y = 1; y <= 4; y++,counter++)
	{
		for (x = 1; x <= 1 + counter; x++)
		{
			printf("%d", x);
		}
		printf("\n");
	}
	system("pause");
}