

#include <stdio.h>

int main()
{
	int i, x, y;
       	const int k = 3, l = 5;

	for (i = 1; i < 1024; i++)
	{
		if ((x != 1023) && (y != 1020))
		{
			x = 1, y = 1;
			x = k * i;
			y = l * i;
			printf("%d, ", x);
			printf("%d, ", y);
		}
		else
			break;
	}
	putchar('\n');

	return 0;
}
