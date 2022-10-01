#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 * @a: array
 * @n: number of elements within array
 */

void reverse_array(int *a, int n)
{
	int arr, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		arr = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = arr;
	}
}
