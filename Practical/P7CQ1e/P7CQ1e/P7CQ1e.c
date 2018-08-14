/*
Program Name : P7CQ1e
Name		 : Ooi Yen Chun
Date		 :29-7-2018
*/

#include<stdlib.h>
#include<stdio.h>


void main()
{
	int x, y,counter;

	for (y = 1,counter=0; y <= 4; y++,counter++)
	{
		for (x = 1; x <= 1+counter; x++)
		{
			if (x == y)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	system("pause");
}