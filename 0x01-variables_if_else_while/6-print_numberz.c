#include <stdio.h>
/**
 * main - print digits using putchar
 * description - same as main
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
