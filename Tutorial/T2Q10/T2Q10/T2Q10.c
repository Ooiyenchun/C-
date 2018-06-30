/*
Program Name : T2Q10
Name         : Ooi Yen Chun
Date         : 10-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int number1, number2, number3;

void main()
{
	//Input
	printf("Please enter three numbers : ");
	scanf("%d" "%d" "%d", &number1, &number2, &number3);

	
	
	//Output
	printf("\n\nYour number forward : \n%d\n%d\n%d\n\n", number1, number2, number3);
	printf("Your number reversed :\n%d\n%d\n%d\n", number3, number2, number1);

	system("pause");
}

/*
Please enter three numbers : 189 220 390


Your number forward :
189
220
390

Your number reversed :
390
220
189
Press any key to continue . . .
*/