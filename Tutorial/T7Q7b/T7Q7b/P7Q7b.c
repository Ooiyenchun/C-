#include<stdlib.h>
#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int i, j, x = 0;
	for (i = 0; i < 5; ++i)
	{
		for (j=0;j<1;++j)
		{
			switch (i + j - 1)
			{
			case -1:
			case 0:x += 1;
				break;
			case 1:
			case 2:
			case 3:x += 2;
				break;
			default:x += 3;
			}
			printf("%d %d %d\n", i, j, x);
		}
	
	}
	printf("\nx=%d", x);
	system("pause");
}