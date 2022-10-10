#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it to a specific char
 * @size - size of array to be initialized
 * @c - specific char to initialize array with
 * Return: end result
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
			return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
