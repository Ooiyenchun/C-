/*
Project Name : P3Q6
Name         : Ooi Yen Chun
Date         : 8-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

int n;

void main()
{
	printf("Enter an integer > ");
	scanf("%d", &n);

	printf("\nExample of number %d in different base\n",n);
	printf("--------------------------------------------\n");

	printf("Decimal         : %d\n", n);
	printf("Octal           : %o\n", n);
	printf("Hexadecimal     : %x\n", n);
	printf("Hexadecimal     : %X\n", n);
	
	system("pause");

}
/*
Enter an integer > 123

Example of number 123 in different base
--------------------------------------------
Decimal         : 123
Octal           : 173
Hexadecimal     : 7b
Hexadecimal     : 7B
Press any key to continue . . .
*/

/*
Enter an integer > 456

Example of number 456 in different base
--------------------------------------------
Decimal         : 456
Octal           : 710
Hexadecimal     : 1c8
Hexadecimal     : 1C8
Press any key to continue . . .
*/