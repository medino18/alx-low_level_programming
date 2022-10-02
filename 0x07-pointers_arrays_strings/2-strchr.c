#include "main.h"

/**
 * _strchr - locates xter in a string
 * @s: string to be searched
 * @c: xter to be located
 * Return: end result
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
