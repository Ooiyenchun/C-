/*
Program Name : P9Q2
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main()
{
	char title[32] = "programming concepts and design";
	int vowels = 0, col, vowelschar[36];

	for (col = 0; col < 32; col++)
		if (title[col] == 'a' || title[col] == 'e' || title[col] == 'i' || title[col] == 'o' || title[col] == 'u')
		{
			vowels++;
			vowelschar[col] = title[col];
		}
		else
		{
			vowelschar[col] = NULL;
		}

	printf("The number of a are ");
	for (col = 0; col < 32; col++)
		printf("%c ", vowelschar[col]);
	printf("\nTotal of vowels is %d\n", vowels);

	printf("\nThe title in reverse are :\n");
	for (col = 31; col >= 0; col--)
		printf("%c", title[col]);
	printf("\n\n");
	system("pause");
}