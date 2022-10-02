#include "main.h"

/**
 * *_memcpy - cp mem area
 * @dest: mem area
 * @src: spurce
 * @n: length of src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
