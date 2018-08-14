/*
Program Name : P7CQ1b
Name		 : Ooi Yen Chun
Date		 : 28-7-2018
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int horiz, vertic, number,a=0;

	for (vertic = 1,number=1,a=0; vertic <= 4; vertic++, number++,a++)
	{
		for (horiz=1; horiz<=4-a; horiz++)
		{
			printf("%d",number);
		}
		printf("\n");
	}
	system("pause");
}