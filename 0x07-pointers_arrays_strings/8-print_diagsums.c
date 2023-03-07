#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *@a: first value -char
 *@size: second value -int
 */

void print_diagsums(int *a, int size)
{
	int	i;
	int	j;
	int	sum1;
	int	sum2;
	int	d;
	int	b;

	i = 0;
	d = size - 1;
	sum1 = 0;
	sum2 = 0;
	b = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				sum1 += a[b];
			}
			if (j == d)
			{
				sum2 += a[b];
			}
			b++;
			j++;
		}
		d--;
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
