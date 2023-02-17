#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: always 0
 */

int main(void)
{
	int	i;
	char	l;

	i = 0;
	l = 'a';
	while (i <= 9)
	{
		putchar((i % 10) + '0');
		i++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
