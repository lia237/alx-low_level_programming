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
	int	i

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < src[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
