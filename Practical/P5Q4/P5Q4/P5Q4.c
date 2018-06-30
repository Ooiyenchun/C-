/*
Program Name : P5Q4
Name         : Ooi Yen Chun
Date         : 24-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)

void main()
{
	double PI=3.14159;
	double lengthA, lengthB, lengthC, degreeBC, radiansBC;

	//OUTPUT
	printf("Enter the length of side b of an triangle : ");
	scanf("%lf", &lengthB);
	printf("Enter the length of side c of an triangle : ");
	scanf("%lf", &lengthC);
	printf("Enter the angle between b and c in degree : ");
	scanf("%lf", &degreeBC);

	//PROCESS
	radiansBC = degreeBC * PI / 180;
	lengthA = sqrt(pow(lengthB, 2) + pow(lengthC, 2) -2 * lengthB * lengthC * cos(radiansBC));

	//OUTPUT
	printf("\n\nThe length of A of an triangle is %.2f\n", lengthA);

	system("pause");

}

/*
Enter the length of side b of an triangle : 100
Enter the length of side c of an triangle : 100
Enter the angle between b and c in degree : 60


The length of A of an triangle is 100.00
Press any key to continue . . .
*/
