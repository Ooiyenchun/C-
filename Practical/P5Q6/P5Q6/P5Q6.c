/*
Program Name : P5Q6
Name         : Ooi Yen Chun
Date         : 25-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void myName();
void myAddress();
void nameCard();

char name1[30];
char address1[30], address2[30], address3[30];

void main()
{
	myName();
	myAddress();
	nameCard();

	system("pause");
}

void myName()
{
	printf("Enter your name : ");
	scanf("%[^\n]", &name1);
	rewind(stdin);
}

void myAddress()
{
	printf("Enter your address in 3 row : \n");
	scanf("%[^\n]",&address1);
	rewind(stdin);
	scanf("%[^\n]", &address2);
	rewind(stdin);
	scanf("%[^\n]", &address3);
}

void nameCard()
{
	printf("\n\n\n%s\n\n%s\n%s\n%s\n\n\n", name1, address1,address2,address3);

}
