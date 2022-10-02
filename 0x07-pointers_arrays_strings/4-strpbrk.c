#include "main.h"

/**
 * _strpbrk - searches for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: end result
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
