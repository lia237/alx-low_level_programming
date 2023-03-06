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
	while (accept[j])
	{
		while (s[i])
		{
			if (accept[j] == s[i])
			{
				c++;
				break;
			}
			i++;
		}
		i = 0;
		j++;
	}
	if (accept[j] == '\0')
		c++;
	return (c);
}
