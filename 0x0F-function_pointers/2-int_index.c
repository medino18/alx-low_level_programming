#include "function_pointers.h"

/**
 * int_index - searches for integer in array of integers
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to fxn to compare values
 * Return: end value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
