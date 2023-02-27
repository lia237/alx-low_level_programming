#include "main.h"

/**
 * _strcpy - copie the string
 * @dest: array that returns
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest.
 */

char *_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	while (i < src[i])
	{
		dest[j] = '\0';
		i++;
	}
	return (dest);
}
