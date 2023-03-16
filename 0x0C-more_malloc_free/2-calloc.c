#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: how many
 * @size: in bytes
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	i;
	void	*ptr;
	char	*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	p = (char *)ptr;
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
