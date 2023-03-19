#include <stdio.h>

/**
 * main - program printing number of arguments passed
 * @argc: argument count
 * @argv: number of arrays
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, count = 0;

	for (i = 1; i < argc; i++)
		count++;
	printf("%d\n", count);
	return (0);
}
