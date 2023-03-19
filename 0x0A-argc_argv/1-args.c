#include <stdio.h>

/**
 * main - program printing number of arguments passed
 * @argc: argument count
 * @argv: number of arrays
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);

	else
	{
		for (i = 1; *argv; argv++)
			i++;
		printf("%d\n", i);
	}
	return (0);
}
