#include <stdio.h>
/**
 * main-prints alphabets
 * Descripion- prints lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
