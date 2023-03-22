#include "function_pointers.h"

/**
 * int_index - iterate over an array and executes passed functions on the
 * elements.
 * @array: array of intergers.
 * @size: size of array.
 * @cmp: is the fuction to execute on the array.
 *
 * Return: Index (int)
 */

int int_index(int *array, int size, int (*cmp)(int));
