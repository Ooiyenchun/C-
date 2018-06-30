/*
Program Name : P4Q9
Name         : Ooi Yen Chun
Date         : 18-6-2018
*/

#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

#define TAX_RATE 0.0825


void main()
{
	char item1[10] = "KEYBOARD", item2[10] = "MOUSE", item3[10] = "MONITOR", item4[10] = "PRINTER", item5[10] = "SPEAKER";
	float keyboard = 35.50, mouse = 12.90, monitor = 600.00, printer = 168.00, speaker = 120.00;
	float keyboardPrice, mousePrice, monitorPrice, printerPrice, speakerPrice, subtotal, tax, total;
	int keyboardUnit, mouseUnit, monitorUnit, printerUnit, speakerUnit;

	//INPUT
	printf("\nEnter number of item sold :\n");
	printf("Keyboard > ");
	scanf("%d", &keyboardUnit);
	printf("Mouse    > ");
	scanf("%d", &mouseUnit);
	printf("Monitor  > ");
	scanf("%d", &monitorUnit);
	printf("Printer  > ");
	scanf("%d", &printerUnit);
	printf("Speaker  > ");
	scanf("%d", &speakerUnit);

	//PROCESS
	keyboardPrice = keyboard * keyboardUnit;
	mousePrice = mouse * mouseUnit;
	monitorPrice = monitor * monitorUnit;
	printerPrice = printer * printerUnit;
	speakerPrice = speaker * speakerUnit;
	subtotal = keyboardPrice + mousePrice + monitorPrice + printerPrice + speakerPrice;
	tax = subtotal * TAX_RATE;
	total = subtotal + tax;

	//OUTPUT
	printf("\n\nQTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
	printf("---\t-----------\t----------\t-----------\n");
	printf("%3d\t%-11s\t%10.2f\t%11.2f\n", keyboardUnit, item1, keyboard, keyboardPrice);
	printf("%3d\t%-11s\t%10.2f\t%11.2f\n", mouseUnit, item2, mouse, mousePrice);
	printf("%3d\t%-11s\t%10.2f\t%11.2f\n", monitorUnit, item3, monitor, monitorPrice);
	printf("%3d\t%-11s\t%10.2f\t%11.2f\n", printerUnit, item4, printer, printerPrice);
	printf("%3d\t%-11s\t%10.2f\t%11.2f\n", speakerUnit, item5, speaker, speakerPrice);
	printf("\t\t\t\t\t-----------\n");
	printf("\t\t\tSUBTOTAL\t%11.2f\n",subtotal);
	printf("\t\t\tTAX (8.25%)\t%11.2f\n", tax);
	printf("\t\t\tTotal\t\t%11.2f\n\n", total);

	system("pause");
}