#include "main.h"

/**
 * _isupper - checks if char is uppercase
 * @c: integer variable
 * Return: 1 if true, 0 if falxe
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
