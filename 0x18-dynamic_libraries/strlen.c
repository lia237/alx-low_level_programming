#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: char type pointer
 *
 * Return: string
 */

size_t _strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
