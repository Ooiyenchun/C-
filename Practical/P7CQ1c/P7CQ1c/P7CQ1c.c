/*
Program Name : P7CQ1C
Name		 : Ooi Yen Chun
Date		 : 29-7-2018
*/

#include<stdlib.h>
#include<stdio.h>



void main()
{
	int y, x, number,decreaser;


	for (y = 1,decreaser=0; y <= 4; y++,decreaser++)
	{
		for (x = 1, number = 1; x <= 4-decreaser; x++, number++)
		{
			printf("%d", number);
		}
		printf("\n");
	}
	system("pause");
}