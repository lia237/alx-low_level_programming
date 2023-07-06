#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * You are not allowed to use the % or / operators
 * @n: Number Input 1.
 * @m: Number Input 2.
 * Return: Number of flip in the Input numbers.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int	res;
	unsigned int	count;

	res = n ^ m;
	count = 0;
	while (res)
	{
		if (res & 1)
			count++;
		res >>= 1;
	}
	return (count);
}

