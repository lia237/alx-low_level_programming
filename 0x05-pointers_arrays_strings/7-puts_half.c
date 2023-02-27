#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: char type
 *
 * Return: none
 */

void puts_half(char *str)
{
	int	i;
	int	len;
	int	start;

	while (str[i])
	{
		i++;
	}
	len = i;
	start = (i + 1) / 2;
	start = i;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
