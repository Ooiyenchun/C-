#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int width, height, i, j;

	printf("Enter width and height: ");
	scanf("%d %d", &width, &height);

	for (i = 1; i <= width; i++)
		printf("*");

	printf("\n");

	for (i = 1; i <= height; i++)
	{
		for (j = 1; j <= width; j++)
		{
			if (j == 1 || j == width)
				printf("*");
			else
				printf(" ");
			}
		printf("\n");
		}
for (i = 1; i <= width; i++)
printf("*");
printf("\n");

system("pause");

}