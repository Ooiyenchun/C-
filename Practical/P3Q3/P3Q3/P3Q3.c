/*
Program Name : P3Q3
Name         : Ooi Yen Chun
Date         : 7-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

char name,gender;
int age;
float income;


void main()
{
	//Input
	printf("Enter <name> <age> <gender> <income> : /n/n");
	scanf("%c %d %c %f", &name, &age, &gender, &income);

	//Output
	printf("Name    : %c", name);
	printf("Age     : %d", age);
	printf("Gender  : %c", gender);
	printf("Income  : %f", income);

	system("pause");

}
	