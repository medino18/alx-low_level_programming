#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints two numbers
 * @argc: arg count
 * @argv: array numbers
 * Return: 0 if successful, 1 if not
 */

int main(int argc, char **argv)
{
	int i, j = 1;

	for (i = 0; i < argc; i++)
		;

	if (i != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%s\n", argv[0]);
		for (i = 1; i < argc ; i++)
		{
			printf("%d\n", atoi(argv[i]));
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
