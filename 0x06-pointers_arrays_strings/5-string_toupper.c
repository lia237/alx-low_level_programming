#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @s: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */

char *string_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
