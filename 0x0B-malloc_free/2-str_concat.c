#include "main.h"

/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int	i;
	int	len1;
	int	len2;

	w = 0;
	while(s1[i] && s2[i])
	{
		i++;
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (s1 == NULL &&  s2 == NULL)
	{
		return (NULL);
	}
	res = malloc(sizeof(char) * (len1 + len2 + 1));
}
