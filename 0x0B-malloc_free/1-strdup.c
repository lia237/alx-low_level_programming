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
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *_strdup(char *str)
{
	int	len;
	int	i;
	char	*copy;

	len = _strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
