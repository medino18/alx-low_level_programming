#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase letter
 * @c: the integer value received
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/*refer inc c*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
