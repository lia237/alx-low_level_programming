#include "main.h"

/**
 * print_ alphabet prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: always 0
 */

void print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
