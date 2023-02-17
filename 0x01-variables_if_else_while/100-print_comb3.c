#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: always 0
 */

int main(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (i1 <= 8)
	{
		while (i2 <= 9)
		{
			putchar((i1 % 10) + '0');
			putchar((i2 % 10) + '0');
			if (i1 == 8 && i2 == 9)
				break;
			putchar(',');
			putchar(' ');
			i2++;
		}
		i2 = 0;
		i1++;
	}
	putchar('\n');
	return (0);
}
