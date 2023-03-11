#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they are identical
 * @s1: the first string to compare
 * @s2: the second string to compare, which may contain wildcard characters
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (1);
	}
	else if (s2[i] == '*')
	{
		if (s1[i] == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (s1[i] == s2[i])
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
