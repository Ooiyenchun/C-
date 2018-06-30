/*
Program Name : P5Q7
Name         : Ooi Yen Chun
Date         : 25-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

int menu();

int main()
{ 
	int selection;
	selection=menu();

	printf("\n\nYou have key in %d \n\n", selection);

	system("pause");
	return 0;
}

int menu()
{
	int choice;

	printf("=================TODAY'S MENU==================\n");
	printf("\nSet 1 (RM 12) Beef burger with fries and coke\n");
	printf("Set 2 (RM 10) Chicken burger with fries and coke\n");
	printf("Set 3 (RM 8) Egg burger with fries and coke\n");
	printf("\n===============================================\n\n");
	printf("Enter your choice (1/2/3) : ");
	scanf("%d", &choice);

	return choice;


}

/*

*/