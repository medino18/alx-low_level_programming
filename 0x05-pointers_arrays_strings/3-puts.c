#include "main.h"

/**
 * _puts - prints a string then a new line to stdout
 * @str: varialbe
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
