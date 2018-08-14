/*
Program Name : P7BQ7
Name		 : Ooi Yen Chun
Date		 : 26-7-2018
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main()
{
	double userinput[2];
	char loop='Y';


	while (loop == 'Y')
	{
		printf("Please enter the value of x and in in x y : ");
		scanf("%lf %lf", &userinput[0],&userinput[1]);

		printf("The value of x with the power of y is %.f.\n", pow(userinput[0], userinput[1]));

		printf("The result of the %.f is %.2f\n", pow(userinput[0], userinput[1]), sqrt(pow(userinput[0], userinput[1])));

		printf("Enter Y to repeat,while N to stop : ");
		rewind(stdin);
		scanf("%c", &loop);

		loop = toupper(loop);
	}

	system("pause");
	return 0;

}