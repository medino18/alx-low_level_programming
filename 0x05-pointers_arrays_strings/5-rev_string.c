#include "main.h"

/**
 * rev_string - fxn that reverses a string
 * @s: variable
 * Return: 0
 */

void rev_string(char *s)
{
	int a, i, c;
	char b;

	for (a = 0; s[a] != '\0'; a++)
		i = 0;
	c = a / 2;

	while (c--)
	{
		b = s[a - i - 1];
		s[a - i - 1] = s[i];
		s[i] = b;
		i++;
	}
}


