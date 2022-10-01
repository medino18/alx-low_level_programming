#include "main.h"

/**
 * string_toupper - fxn that changes string from lower to uppercase
 * @str: string to be converted
 * Return: end result
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
