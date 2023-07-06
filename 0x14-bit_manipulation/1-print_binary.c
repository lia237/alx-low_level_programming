#include "main.h"
#include <stdio.h>

void print_binary(unsigned long int n)
{
	int	i;
	unsigned long int	mask;

	mask = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			break;
		}
		mask <<= 1;
	}
	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}

