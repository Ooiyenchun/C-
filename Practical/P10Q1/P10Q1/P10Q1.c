/*
Program Name : P10Q1
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)

void main()
{
	char sentence[81],row;
	printf("Please enter a sentence :\n");
	scanf("%[^\n]", &sentence);

	for (row = 0; row < 80; row++)
	{
		sentence[row] = toupper(sentence[row]);
	}
	printf("\nSentence in upper case:\n");
	printf("%s!!!\n\n\n",sentence);
	system("pause");
}