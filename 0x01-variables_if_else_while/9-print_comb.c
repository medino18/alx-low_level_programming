#include <stdio.h>
/**
 * main - printing combination of numvers
 * description - same as main
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
