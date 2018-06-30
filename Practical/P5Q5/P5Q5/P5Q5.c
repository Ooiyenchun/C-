/*
Program Name : P5Q5
Name         : Ooi Yen Chun
Date         : 25-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)
#include<ctype.h>

void main()
{

	char char1, newChar1;

	printf("Enter a character : ");
	scanf("%c", &char1);

	newChar1 = toupper(char1);

	printf("\nThe letter %c in uppercase is %c\n", char1, newChar1);

	system("pause");

}

/*
Enter a lowercase letter : m

The letter m in uppercase is M
Press any key to continue . . .
*/
/*
Enter a lowercase letter : G

The letter G in uppercase is G
Press any key to continue . .
*/
/*
Enter a lowercase letter : %

The letter % in uppercase is %
Press any key to continue . . .
*/





