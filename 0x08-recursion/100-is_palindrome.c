#include "main.h"

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
 * is_palindrome - check the code for Holberton School students.
 * @s: String for checking
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int	len;
	int	i;

	len = _strlen(s);
	i = 0;
	while (i < len)
	{
		if (s[i] != s[len - 1 - i])
		{
			return (0);
		}
		i++;
	}
	return (1);

}
