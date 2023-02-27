#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: a string
 *
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
	i--;
	j = 0;
	while (j <  len / 2)
	{
		swp = s[j];
		s[j] = s[i];
		s[i] = swp;
		j++;
		i--;
	}
}
