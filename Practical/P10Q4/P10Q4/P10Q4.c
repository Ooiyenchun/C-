/*
Program Name : P10Q4
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	char ascending[7] = "", decending[7]="", row;

	for (row = 0; row < 6; row++)
	{
		ascending[row] = 'A' + row;
	}
	for (row = 0; row <6; row++)
	{
		decending[row] = ascending[5-row];
	}
	printf("%s\n%s\n", ascending, decending);
	system("pause");
}