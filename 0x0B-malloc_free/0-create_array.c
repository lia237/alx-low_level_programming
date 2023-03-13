#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @c: array of chars
 * @size: the size of the memory to print
 *
 * Return: address of the memory to print
 */

char *create_array(unsigned int size, char c)
{
	unsigned int	i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
