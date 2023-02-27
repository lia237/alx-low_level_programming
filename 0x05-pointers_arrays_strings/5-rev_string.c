#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: a string
 *
 * Description: reversing a string
 * Return: none
 */

void rev_string(char *s)
{
	int	i;
	int	swp;
	int	j;
	int	len;

	i = 0;
	while (s[i])
	{
		i++;
	}
	len = i;
	len--;
	j = 0;
	while (j <  len / 2)
	{
		swp = s[j];
		s[j] = s[len];
		s[len] = swp;
		j++;
		len--;
	}
}
