#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: 1st argument int type
 * @b: 2nd argument int type
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
