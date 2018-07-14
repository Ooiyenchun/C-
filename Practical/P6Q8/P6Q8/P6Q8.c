/*
Program Name : P6Q8
Name         : Ooi Yen Chun
Date         : 5-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int totalSummonse, age;

	printf("Enter number of traffic summonses you received in last three years: ");
	scanf("%d", &totalSummonse);

	printf("Enter your current age : ");
	scanf("%d", &age);

	if (totalSummonse == 0 && age >= 30)
		printf("\nCongradulations!You are low-risk driver.\n");

	system("pause");
	return 0;
}