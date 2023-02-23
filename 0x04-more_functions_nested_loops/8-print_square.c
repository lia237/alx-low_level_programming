#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int size)
{
	int	i;
	int	sq;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('#');
			sq = 0;
			while (sq < i)
			{
				_putchar('#');
				sq++;
			}
			_putchar('\n');
			i++;
		}
	}

}
