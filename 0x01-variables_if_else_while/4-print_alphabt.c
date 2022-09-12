#include <stdio.h>
/**
 * main - print alphabets except q and e
 * description - same as main
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al)
		}
	}
	putchar('\n');
	return (0);
}
