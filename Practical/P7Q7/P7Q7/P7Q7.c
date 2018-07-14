/*
Program Name : P7Q4
Name         : Ooi Yen Chun
Date         : 14-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int userinput = 0, numberOfInput, sum = 0;
	float average;

	numberOfInput = 0;
	do
	{
		numberOfInput++;
		sum += userinput;
		printf("Please enter a number (type -999 to stop): ");
		scanf("%d", &userinput);
		if (userinput = -999)
			numberOfInput--;
	} while (userinput != -999);
	average = sum / numberOfInput;
	printf("You have keyyed in %d number", numberOfInput);
	printf("The total is %d\n", numberOfInput, sum);
	printf("The average is %.3f\n", average);

	system("pause");
	return 0;
}