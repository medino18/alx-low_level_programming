#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: variable
 * Return: int length
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}
