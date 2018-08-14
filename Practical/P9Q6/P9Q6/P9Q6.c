/*
Program Name : P9Q6
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int row, response, marks[5] = { 0 }, total = 0;
	printf("Please enter the survey marks below : \n");
	printf("Question\tResponse(0-4)\n");
	for (row = 0; row < 10; row++)
	{
		printf("  Q%2d\t\t: ",row+1);
		scanf("%d", &response);
		if (response > 0 && response < 5)
			total+=response;
		switch (response)
		{
		case 1:
			marks[0]++;
			break;
		case 2:
			marks[1]++;
			break;
		case 3:
			marks[2]++;
			break;
		case 4:
			marks[3]++;
			break;
		default:
			marks[4]++;
		}
	}
	printf("RESULTS\n=======\n");
	printf("Response\tFrequency\n");
	printf("--------\t---------\n");
	printf("1-Very Bad\t%3d\n",marks[0]);
	printf("2-Bad\t\t%3d\n", marks[1]);
	printf("3-Good\t\t%3d\n", marks[2]);
	printf("4-Excellent\t%3d\n", marks[3]);
	printf("*-Invalid\t%3d\n", marks[4]);
	printf("\nTotal Mark = %d\n", total);

	system("pause");

}