#include "main.h"
#include <stdlib.h>

/**
 * _strlen -  function that returns the length of a string.
 * @s: char type pointer
 *
 * Return: string
 */

int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
#include <stdio.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: the first str
 * @s2: the second str
 * @n: how much of s2 to add
 *
 * Return: concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	i, j, l1, l2;
	char	*concat;

	if (s1 != NULL)
		l1 = _strlen(s1);
	else
		l1 = 0;
	if (s2 != NULL)
		l2 = _strlen(s2);
	else
		l2 = 0;
	if (l2 < n)
		n = l2;
	concat = malloc(sizeof(char) * (l1 + n + 1));
	if (!concat)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		concat[i + j] = s2[j];
		j++;
	}
	concat[i + j] = '\0';

	return (concat);
}
