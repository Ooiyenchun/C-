/*Program Name : P5Q1
Name           : Ooi Yen Chun
Date           : 20-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

void main()
{
	double input1, input2,answer1,answer2,answer3,answer4,answer5;

	printf("Enter two input,x and y : ");
	scanf("%lf %lf", &input1, &input2);
	
	//process
	answer1 = sqrt(input1*input2);
	answer2 = sqrt(input1)*sqrt(input1);
	answer3 = pow(input1, input2);
	answer4 = pow(input2, input1);
	answer5 = log10(pow(input1, input2));

	printf("1)square root of xy = %.4f\n", answer1);
	printf("2)square root of x time square root of y = %.4f\n", answer2);
	printf("3)x with the power of y = %.4f\n", answer3);
	printf("4)y with the power of x = %.4f\n", answer4);
	printf("5)log x with the power of y = %f\n", answer5);


	system("pause");


}