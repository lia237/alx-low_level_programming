#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int	i;
	int	j;
	unsigned int	c;

	i = 0;
	j = 0;
	c = 0;
	while (s[i] && accept[j])
	{
		if (accept[j] == s[i])
		{
			c++;
			i = -1;
			j++;
		}
		i++;
	}
	c++;
	return (c);
}
