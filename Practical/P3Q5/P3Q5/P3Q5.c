/*
Program Name : P3Q4
Name         : Ooi Yen Chun
Date         : 7-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

char name1[51], name2[51];
float salesAmount1, salesAmount2;

void main()
{
	//Input
	printf("Enter staff name    > ");
	scanf("%[^\n]",&name1);
	printf("Enter sales amount  > ");
	scanf("%f", &salesAmount1);

	printf("Enter staff name    > ");
	scanf(" %[^\n]",&name2);
	printf("Enter sales amount  > ");
	scanf(" %f", &salesAmount2);

	//Output
	printf("\n\nStaff Name                     Sales Amount");
	printf("\n=========================      ============");
	printf("\n %-30s RM%10.2f", name1, salesAmount1);
	printf("\n %-30s RM%10.2f\n", name2, salesAmount2);

	system("pause");
}

/*
Enter staff name    > Xiao Ming
Enter sales amount  > 100224.27
Enter staff name    > Xiao Guang
Enter sales amount  > 203332.56


Staff Name                     Sales Amount
=========================      ============
Xiao Ming                        100224.27
Xiao Guang                       203332.56
Press any key to continue . . .
*/
