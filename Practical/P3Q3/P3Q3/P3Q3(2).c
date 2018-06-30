#include<stdio.h>
#pragma warning (disable:4996)

char name[20],gender;
int age;
float income;


void main()
{
	//Input
	printf("Enter <name> <age> <gender> <income> : ");
	scanf("%s %d %c %f",&name,&age,&gender,&income);

	//Output
	printf("\n\nName    : %s", name);
	printf("\nAge     : %d", age);
	printf("\nGender  : %c", gender);
	printf("\nIncome  : RM%0.2f\n", income);

	system("pause");

}

/*
Enter <name> <age> <gender> <income> : BaoSheng 32 M 3500


Name    : BaoSheng
Age     : 32
Gender  : M
Income  : RM3500.00
Press any key to continue . . .
*/
