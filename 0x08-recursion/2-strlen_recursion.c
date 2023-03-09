#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int	i;

	i = 0;
	if (s[i])
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
