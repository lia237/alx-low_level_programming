#include "main.h"

/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */

int _strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
