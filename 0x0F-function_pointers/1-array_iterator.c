#include "function_pointers.h"

/**
 * array_iterator - fuction execute a fuction.
 * @array: array to interate through.
 * @size: size of the array.
 * @action: the fuction to execute array and size on.
 *
 * Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	if (!array || !action || !size)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
