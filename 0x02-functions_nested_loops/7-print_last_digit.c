#include "main.h"

/**
 * print_last_digit - entry point
 * @n: variable
 * Return: integer
 */

int print_last_digit(int n)
{
	int dig = n % 10;

	if (n < 0)
	{
		dig = dig * -1;
	}
	_putchar(dig + '0');
	return (dig);
}
