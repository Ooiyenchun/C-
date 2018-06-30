/*
Program Name : P4Q4
Name         : Ooi Yen Chun
Date         : 13-5-2018
*/

#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)

void main()
{
	int integer1, integer2, quotient, remainder;

	//Input
	printf("Enter two number : ");
	scanf("%d %d", &integer1,&integer2);

	//Process
	quotient = integer1/integer2;
	remainder = integer1 % integer2;

	//Output
	printf("%d divided by %d equals to %d,with remainder %d\n", integer1, integer2, quotient, remainder);

	system("pause");

}
