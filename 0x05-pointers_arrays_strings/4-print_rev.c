#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: a string
 *
 * Return: none
 */

void print_rev(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	while (i > s[0])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
