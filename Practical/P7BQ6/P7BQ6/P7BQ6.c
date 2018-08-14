/*
Program Name : P7BQ6
Name		 : Ooi Yen Chun
Date		 : 26-7-2018
*/



#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int integer, number=0,initial;
	printf("Enter an integer > ");
	scanf("%d", &integer);
	initial = integer;

	do
	{
		integer /= 10;
		number++;

	}while( integer!= 0);
	
	printf("The number %d contains %d digit(s).\n",initial,number);

	system("pause");
	return 0;
}