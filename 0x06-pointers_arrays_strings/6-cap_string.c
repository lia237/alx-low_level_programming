#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @s: This is the input string
 *
 * Return: String capitalized
 */

char *cap_string(char *s)
{
	int	next;
	int	i;

	next = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
				s[i] == ',' || s[i] == ';' ||
				s[i] == '?' || s[i] == '.' ||
				s[i] == '!' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' ||
				s[i] == '}' || s[i] == '"')
		{
			next = 1;
		}
		else if (next > 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
			next = 0;
		}
		i++;
	}
	return (s);
}
