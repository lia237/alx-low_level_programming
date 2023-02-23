#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int	i;
	int	j;

	if (size > 0)
	{
		i = size;
		while (i > 0)
		{
			j = 1;
			while (j <= size)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i--;
		}
	}
	else
	{
		_putchar('\n');
	}
