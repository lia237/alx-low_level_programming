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

	if (s[i])
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
