/*
Program Name : P6Q9
Name         : Ooi Yen Chun
Date         : 5-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{ 
	int totalSummonses, age;
	char gender;
	printf("Please enter your gender in M for male and F for female : ");
	scanf("%c", &gender);
	printf("Please enter your current age : ");
	scanf("%d", &age);
	printf("Please enter traffic summonses you received : ");
	scanf("%d", &totalSummonses);

	if (gender == 'M'&&age < 25 && totalSummonses>2)
		printf("\nYou are a very high-risk driver.Please be careful!\n");

	system("pause");
	return 0;
}