/*
Program Name : P10Q2
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#pragma warning(disable:4996)

void strCatTest();
void main()
{ /*
	char surname[31], firstName[31], secondName[31];

	printf("What is your surname?\t\t");
	scanf("%s", &surname);
	rewind(stdin);
	printf("What is your first name\t\t");
	scanf("%s", &firstName);
	rewind(stdin);
	printf("What is your second name?\t");
	scanf("%s", &secondName);

	//Process
	surname[0] = toupper(surname[0]);
	firstName[0] = toupper(firstName[0]);
	secondName[0] = toupper(secondName[0]);

	printf("\n\nYour Full Name is\t\t: %s %s %s\n",firstName,secondName,surname);
	printf("Your Abbrieviate Name is\t: %c%c %s\n", firstName[0],secondName[0],surname);
	*/
	strCatTest();
	system("pause");

}
void strCatTest()
{
	char surname[31], firstName[31], secondName[31];
	char fullName[81] = {' '}, shortForm[71] = {' '};

	printf("What is your surname?\t\t");
	scanf("%[^\n]", surname);
	rewind(stdin);
	printf("What is your first name\t\t");
	scanf("%[^\n]", firstName);
	rewind(stdin);
	printf("What is your second name?\t");
	scanf("%[^\n]", secondName);

	surname[0] = toupper(surname[0]);
	firstName[0] = toupper(firstName[0]);
	secondName[0] = toupper(secondName[0]);



	strcat(surname," ");
	strcat(firstName, " ");
	strcat(secondName," ");

	strcat(fullName,firstName);
	strcat(fullName,secondName);
	strcat(fullName,surname);

	strncat(shortForm, firstName,1);
	strncat(shortForm, secondName, 1);
	strcat(shortForm, surname);
	
	printf("\n\nYour Full Name is\t\t: %s\n", fullName);
	printf("Your Abbrieviate Name is\t: %s\n",shortForm);

}