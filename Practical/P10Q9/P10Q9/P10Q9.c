/*
Program Name : P10Q9
Name		 : Ooi Yen Chun
Date		 : 4-8-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int programmeByCampus[4][5] = { 50,80,100,60,35,60,120,90,70,50,70,100,110,60,60,60,85,80,75,55 };
	int campus, programme, campusStudents[5] = { 0 }, progrStudents[4] = {0};
	int totalStudents=0;

	//i
	for (campus = 0; campus < 5; campus++)
	{
		for (programme = 0; programme < 4; programme++)
			campusStudents[campus] += programmeByCampus[programme][campus];
		printf("Total students in Campus %c:\t%4d\n", 'A' + campus, campusStudents[campus]);
	}
	printf("\n");
	//ii
	for (programme = 0; programme < 4; programme++)
	{
		for (campus = 0; campus < 5; campus++)
			progrStudents[programme] += programmeByCampus[programme][campus];
		printf("Total students in Programme %d:\t%4d\n", programme+1, progrStudents[programme]);
	}
	printf("\n");
	for (campus = 0; campus < 5; campus++)
	{
		for (programme = 0; programme < 4; programme++)
			totalStudents+= programmeByCampus[programme][campus];
	}
	printf("Grand Total(Total Students in the university):\t%4d\n\n",totalStudents);
	system("pause");
}