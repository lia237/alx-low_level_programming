#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
