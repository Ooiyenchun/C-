/*
Program Name:P2Q6
Name          :Ooi Yen Chun
Date          :1-6-2017
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)
#define MAXIMUM_LOAN_PERIOD 14
#define FINE_RATE 0.2


void main()
{
	double amountFined;
	int    numberOfBooks, numberOfDaysOverdue, daysOfLoan;

	printf("---------------- \n");
	printf("BOOK LOAN SYSTEM \n");
	printf("---------------- \n");
	
	//Input
	printf("Enter the number of books    : ");
	scanf("%d",&numberOfBooks);

	printf("\nEnter the days of the loan   : ");
	scanf("%d",&daysOfLoan);

	//Process
	numberOfDaysOverdue = daysOfLoan -MAXIMUM_LOAN_PERIOD;
	amountFined =  numberOfBooks*numberOfDaysOverdue*FINE_RATE;
	
	
	//Output
	printf("\n----------------------------------------\n");
	printf("Days overdue                 : %d \n", numberOfDaysOverdue);
	printf("Fine                         : RM %.2lf \n", amountFined);

	system("pause");


}

/*
----------------
BOOK LOAN SYSTEM
----------------
Enter the number of books    : 20

Enter the days of the loan   : 20

----------------------------------------
Days overdue                 : 6
Fine                         : RM 24.00
Press any key to continue . . .*/