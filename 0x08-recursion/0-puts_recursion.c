#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int	i;

	i = 0;
	if (s[i] == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_putchar(s + 1);
	}

}
