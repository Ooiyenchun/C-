#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)


void main()
{
	int horiz,vertic = 1,number=1;
	while (vertic <= 4)
	{
		horiz = 1;
		while (horiz <= 4)
		{
			printf("%d", number);
			horiz++;
		}
		printf("\n");
		vertic++;
		number++;
	}

	system("pause");
}