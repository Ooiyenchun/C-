/*
Program Name : P6Q12
Name         : Ooi Yen Chun
Date         : 30-6-2018
*/

#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996 )

int VehicleCode();
int hoursParked();
int operator();
int decoration();

int main()
{
	operator();
	system("pause");
	return 0;
}
int VehicleCode()
{
	char code;
	printf("Vehicle code (C/B/T)\t: ");
	scanf("%c", &code);
	return code;
}
int hoursParked()
{
	double hours,roundedOff;
	printf("Number of hours parked\t: ");
	scanf("%lf", &hours);

	if ((hours - 0.5) >= (floor(hours)))
	{
		roundedOff = ceil(hours);
	}
	else
	{
		roundedOff = floor(hours);
	}

	return roundedOff;
}
int decoration()
{
	printf("\n\n	Parking Ticket\n\t==============\n");
	return 0;
}
int operator()
{
	double hours, rateC = 1.00, rateB = 2.00, rateT = 3.00, amount;
	char vehicleCode;
	vehicleCode = VehicleCode();
	hours = hoursParked();

	decoration();
	
	
	if (vehicleCode != 'C' || 'B' || 'T')
	{
		printf("You have enter an invalid character,please try again later.\n\n\n");
	}
	else
	{
		switch (vehicleCode)
		{
		case 'C':
		{
			printf("Vehicle Type\t\t:\tCar");
			printf("\nHours Parked\t\t:\t%.f", hours);

			amount = hours * rateC;

			printf("\nParking Rate / Hr\t:\t$ %.2f", rateC);
			printf("\nAmount to Pay\t\t:\t$ %.2f\n", amount);
			break;
		}
		case 'B':
		{
			printf("\nVehicle Type\t\t:\tBus");
			printf("\nHours Parked\t\t:\t%.f", hours);

			amount = hours * rateB;

			printf("\nParking Rate / Hr\t:\t$ %.2f", rateB);
			printf("\nAmount to Pay\t\t:\t$ %.2f\n", amount);
			break;
		}
		case 'T':
		{
			printf("\nVehicle Type\t\t:\tTruck");
			printf("\nHours Parked\t\t:\t%.f", hours);

			amount = hours * rateT;

			printf("\nParking Rate / Hr\t:\t$ %.2f", rateT);
			printf("\nAmount to Pay\t\t:\t$ %.2f\n", amount);
			break;
		}

		}
	}
	return 0;
}