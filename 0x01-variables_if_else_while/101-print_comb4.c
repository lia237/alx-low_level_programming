#include <stdio.h>

/**
 * main - Write a program that prints all possible different
 * combinations of three digits.
 *
 * Return: always 0
 */

int main(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				if (i != j && j != k && k != i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
