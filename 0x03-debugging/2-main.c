#include "main.h"
#include <stdio.h>

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int	a;
	int	b;
	int	c;
	int	largest;

	a = 69;
	b = -8;
	c = 0;

	largest = largest_number(a, b, c);
	printf("%d is the largest number\n", largest);

	return (largest);
}
