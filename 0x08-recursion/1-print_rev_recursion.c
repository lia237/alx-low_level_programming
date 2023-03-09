#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int	i;

	if (s[i])
	{
		_print_rev_recursion(s + 1);
		_putchar(s[i]);
	}
}
