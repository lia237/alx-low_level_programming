#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */

void *malloc_checked(unsigned int b)
{
	void	*p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
