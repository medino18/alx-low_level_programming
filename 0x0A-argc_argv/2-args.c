#include <stdio.h>

/**
 * main - program that prints received arguments
 * @argc: arg count
 * @argv: array count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
