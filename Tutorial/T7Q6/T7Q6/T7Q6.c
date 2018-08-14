#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int limit, number=1,counter=1;
	printf("Please enter a limit number : ");
	scanf("%d", &limit);

	while (counter <= limit)
	{
		printf("%d\n", number);
		counter++;
		number = 10 * number + counter;
	}
	system("pause");
}