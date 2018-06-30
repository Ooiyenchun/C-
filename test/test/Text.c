



#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

char name1[20];

void main()
{
	printf("\nPress your name :");
	scanf("%[^\n]", &name1);

	printf("Your name is %s\n", name1);

	system("pause");

}