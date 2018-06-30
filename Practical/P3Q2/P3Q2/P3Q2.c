/*
Project Name :P3Q2
Name         :Ooi Yen Chun
Date         :6-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

char firstAlphabet, secondAlphabet, thirdAlphabet;

void main()
{

	//Input
	printf("Enter 1st character > ");
	firstAlphabet=getchar();
	rewind(stdin);

	printf("Enter 2nd character > ");
	secondAlphabet=getchar();
	rewind(stdin);

	printf("Enter 3rd character > ");
	thirdAlphabet=getchar();

	//Output
	printf("\n");
	printf("ASCII value for character %c is %d \n",firstAlphabet,firstAlphabet );
	printf("ASCII value for character %c is %d \n",secondAlphabet,secondAlphabet );
	printf("ASCII value for character %c is %d \n",thirdAlphabet,thirdAlphabet);

	
	system("pause");
}

/*
Enter 1st character > A
Enter 2nd character > J
Enter 3rd character > k

ASCII value for character A is 65
ASCII value for character J is 74
ASCII value for character k is 107
Press any key to continue . . .
*/