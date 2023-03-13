#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */

char *_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
