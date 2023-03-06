#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *@s: first value -char
 *@c: second value - char
 *
 * Return: char with result
 */

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	if (s[i])
	{
		s += i;
	}
	while (s[i])
	{
		if (s[i] == c)
			s += i;
		i++;
	}
	if (c == '\0')
		s += i;
	return (s);
}
