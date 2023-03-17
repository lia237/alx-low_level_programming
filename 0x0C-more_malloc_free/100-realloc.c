#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_realloc - reallocate memory size function
 * @ptr: pointer to address of old memory location
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return:  return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char	*str;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		str = malloc(new_size);
		free(ptr);
		return (str);
	}
	return (ptr);
}
