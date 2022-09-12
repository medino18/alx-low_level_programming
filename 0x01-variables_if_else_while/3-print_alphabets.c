#include <stdio.h>
/**
 * main - print lowercase and uppercase alphabets
 *
 * description- same as main
 * Return: 0;
 */
int main(void)
{
	char alp2;

	for (alp2 = 'a' ; alp2 <= 'z' ; alp2++)
	{
		putchar(alp2);
	}
	for (alp2 = 'A' ; alp2 <= 'Z' ; alp2++)
	{
		putchar(alp2);
	}
	putchar('\n');
	return (0);
}
