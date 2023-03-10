#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int     i;
	int	sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			sp = 0;
			while (sp < i)
			{
				_putchar(' ');
				sp++;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
