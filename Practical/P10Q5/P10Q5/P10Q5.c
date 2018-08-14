/*
Program Name : P10Q5
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

void main()
{
	char msg[] = "Cry OR Try OR Die Trying";
	int count = 0,row;

	for (row = 0; msg[row] != '\0'; row++)
		if (msg[row] =='r'|| msg[row] == 'R')
			count++;
	printf("%s\n", msg);
	printf("Number of r and R is : %d\n", count);
	system("pause");
}