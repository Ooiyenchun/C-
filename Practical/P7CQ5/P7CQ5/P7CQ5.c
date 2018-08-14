/*
Program Name : P7CQ4
Name		 : Ooi Yen Chun
Date		 : 29-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	printf("===========================================\n");
	printf("\tMARKS PROCESSING SYSTEM\n");
	printf("===========================================\n");
	int counter, marks[3], student, studentCounter, subject, total, highestTotal = 0;
	double average;
	char highestStudent;

	printf("No. of student :");
	scanf("%d", &student);

	for (studentCounter = 1; studentCounter <= student; studentCounter++)
	{
		printf("Student %c\n", 'A' + studentCounter - 1);
		for (subject = 1, counter = 0, total = 0; subject <= 3; counter++, subject++)
		{
			printf("Marks of subject %d : ", subject);
			scanf("%d", &marks[counter]);
			total += marks[counter];
		}
		average = total / counter;

		printf("\nTotal marks\t=\t%d\n", total);
		printf("Average\t\t=\t%.2f\n\n\n", average);
		if (total > highestTotal)
		{
			highestTotal = total;
			highestStudent = 'A' + studentCounter - 1;
		}
	}
	printf("\nStudent %c has the highest total mark of %d\n", highestStudent, highestTotal);
	system("pause");

}