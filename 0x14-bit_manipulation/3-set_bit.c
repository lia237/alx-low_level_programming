#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;
	unsigned long int mask = (unsigned long int) 1 << index;
	*n |= mask;
	return 1;
}
