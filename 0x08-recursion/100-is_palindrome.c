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
	if (s[i] == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: String for checking
 * @start: the starting index of the substring to check
 * @end: the ending index of the substring to check
 *
 * Return: 1 if palindrome, 0 otherwise
*/
int _helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	return (_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Write a function that returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: String for checking
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int	len;

	len = _strlen(s);
	return (_helper(s, 0, len - 1));
}
