#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function to allocate space for sting concatnation
 * @s1: array pointer to destination of string
 * @s2: array pointer to source of string
 * Return: return pointer to copy of string
 */

char *str_concat(char *s1, char *s2)
{
	int	i;
	int	len1;
	int	len2;
	char	*res;

	i = 0;
	len1 = 0;
	len2 = 0;
	while (s1[len1] && s2[len2])
	{
		len1++;
		len2++;
	}
	if (s1 == NULL &&  s2 == NULL)
	{
		return (NULL);
	}
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		res[i] = s2[i - len1];
		i++;
	}
	res[i] = '\0';
	return (res);
}
