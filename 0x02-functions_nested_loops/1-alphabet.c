#include "main.h"

/**
 * main - print lowercase alphabet followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
