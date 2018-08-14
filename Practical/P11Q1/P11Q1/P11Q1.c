/*
Project Name : P11Q1
Name		 : Ooi Yen Chun
Date		 : 13-8-2018
*/

#include <stdio.h>

void binary(int num)
{
	int a, temp;
	for (a = 7; a >= 0; a--)
	{
		temp = num >> a;
		if (temp & 1)
			printf("1");
		else
		{
			printf("0");
		}
	}
}
void main()
{
	binary(13);
	system("pause");
}