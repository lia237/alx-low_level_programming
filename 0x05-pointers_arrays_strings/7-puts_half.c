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
	int	n;

	i = 0;
	while (str[i])
	{
		i++;
	}
	len = i;
	if (len % 2 == 0)
	{
		i = len / 2;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (len % 2)
	{
		n = (len - 1);
		while (n < len - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
