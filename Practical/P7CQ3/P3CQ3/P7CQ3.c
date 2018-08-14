/*
Program Name : P7CQ3
Name		 : Ooi Yen Chun
Date		 : 29-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int counter, marks[3],student,subject,total;
	double average;

	for (student = 1; student <= 3; student++)
	{
		printf("Student %c\n",'A'+student-1);
		for (subject=1,counter=0,total=0; subject <= 3; counter++,subject++)
		{
			printf("Marks of subject %d : ", subject);
			scanf("%d", &marks[counter]);
			total += marks[counter];
		}
		average = total / counter;

		printf("\nTotal marks\t=\t%d\n", total);
		printf("Average\t\t=\t%.2f\n\n\n", average);
	}
	system("pause");
	
}