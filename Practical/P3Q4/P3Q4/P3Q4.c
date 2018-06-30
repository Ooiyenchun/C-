/*
Program Name : P3Q4
Name         : Ooi Yen Chun
Date         : 7-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

char name1[51],name2[51];
float salesAmount1, salesAmount2;

void main()
{
//Input
	    printf("Enter staff name    > ");
		gets(name1);
		printf("\nEnter sales amount  > ");
		scanf("%f", &salesAmount1);
		rewind(stdin);

		printf("\nEnter staff name    > ");
		gets(name2);
		printf("\nEnter sales amount  > ");
		scanf("%f", &salesAmount2);

	//Output
		printf("\n\nStaff Name                     Sales Amount");
		printf("\n=========================      ================");
		printf("\n %-30s RM%10.2f", name1, salesAmount1);
		printf("\n %-30s RM%10.2f\n", name2, salesAmount2);

		system("pause");
}
/*
Enter staff name    > Ooi Yen Chun

Enter sales amount  > 1233.2

Enter staff name    > Xiao Ming

Enter sales amount  > 200022.2


Staff Name                     Sales Amount
=========================      ================
Ooi Yen Chun                  RM     1233.20
Xiao Ming                     RM   200022.20
Press any key to continue . . .
*/