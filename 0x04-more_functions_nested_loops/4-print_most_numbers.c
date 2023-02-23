#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */

void print_most_numbers(void)
{
	int	n;

	if (n != 2 && n != 4)
	{
		n = 0;
		while (n <= 9)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
	}
}
