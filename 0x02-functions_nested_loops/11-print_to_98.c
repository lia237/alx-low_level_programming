#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: print from this number
 */

void print_to_98(int n)
{
	int	i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		printf("98\n");
	}
}
