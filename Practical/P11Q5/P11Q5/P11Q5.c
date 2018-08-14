/*
Program Name : P11Q5
Name		 : Ooi Yen Chun
Date		 : 14-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#pragma warning(disable:4996)

void questionA();
void questionB();
void questionC();
void questionD();
void encryptWord();
void decryptWord();

void main()
{
	char selection;
	do
	{
		rewind(stdin);
		printf("Question a/b/c/d (Other=exit) : ");
		scanf("%c", &selection);
		selection = toupper(selection);
		system("cls");
		switch (selection)
		{
		case 'A':questionA(); break;
		case 'B':questionB(); break;
		case 'C':questionC(); break;
		case 'D':questionD(); break;
		default:
			selection = 'X';
		}
		printf("\n\n");
	}while (selection != 'X');

	system("pause");
}
void questionA()
{
	int key;
	char userInput,encrypted;
	rewind(stdin);
	printf("Enter a character\t: ");
	scanf("%c", &userInput);

	do
	{
		printf("Enter 2 digit KEY\t: ");
		scanf("%d", &key);
	} while (key < 0 || key > 100);


	encrypted = userInput ^ key;

	printf("Character '%c' is encrypted to : %c\n", userInput, encrypted);

}
void questionB()
{
	int key;
	char userInput, decrypted;
	rewind(stdin);
	printf("Enter a character\t: ");
	scanf("%c", &userInput);

	do
	{
		printf("Enter 2 digit KEY\t: ");
		scanf("%d", &key);
	} while (key < 0 || key > 100);


	decrypted = userInput ^ key;

	printf("Character '%c' is decrypted to : %c\n", userInput, decrypted);
}
void questionC()
{
	encryptWord();
	printf("\n\n------------------------------------------------------------------\n");
	decryptWord();

}
void encryptWord()
{
	char userInput[9] = { ' ' }, encrypted[9] = {' '};
	int key,a,temp;
	
	rewind(stdin);
	printf("Enter the 8-character string to be encrypted : ");
	scanf("%s", &userInput);
	do
	{
		rewind(stdin);
		printf("Enter 2 digit KEY\t: ");
		scanf("%d", &key);
	} while (key < 0 || key > 100);

	for (a = 0; a < 8; a++)
	{
		temp = (int)userInput[a] ^ key;
		encrypted[a]=temp;
	}

	printf("\nThe string '%s' is encrypted to : %s\n", userInput, encrypted);
}
void decryptWord()
{
	char userInput[9] = {' '}, decrypted[9] = {' '};
	int key, a,temp;

	rewind(stdin);
	printf("Enter the 8-character string to be decrypted : ");
	scanf("%s", &userInput);
	do
	{
		rewind(stdin);
		printf("Enter 2 digit KEY\t: ");
		scanf("%d", &key);
	} while (key < 0 || key > 100);

	for (a = 0; a < 8; a++)
	{
		temp = (int)userInput[a] ^ key;
		decrypted[a]=temp;
	}

	printf("\nThe string '%s' is decrypted to : %s\n", userInput, decrypted);
}
void questionD()
{
	char encrypted[9] = "dEsxDI^I", decrypted[9] = { ' ' };
	int key, a, temp;

	for(key=0;key<=99;key++)
	{
	for (a = 0; a < 8; a++)
	{
		temp = (int)encrypted[a] ^ key;
		decrypted[a] = temp;
	}
	
	printf("\nHidden message: %s\nEncryption Key : %d\n", decrypted, key);
	}
	/*
	Hidden message: Hi_There
	Encryption Key : 44
	*/
}
		
