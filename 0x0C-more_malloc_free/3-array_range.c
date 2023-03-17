#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers from min to max (inclusive)
 * @min: minimum value to include in array
 * @max: maximum value to include in array
 *
 * Return: pointer to newly created array
 *         NULL if memory allocation fails or min > max
 */

int *array_range(int min, int max)
{
	int	*arr;
	int	i;
	int	size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
