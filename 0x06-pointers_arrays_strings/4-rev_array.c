#include "main.h"

/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */

void reverse_array(int *a, int n)
{
	int	i;
	int	len;
	int	tmp;

	len = n - 1;
	i = 0;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;
		i++;
		len--;
	}
}
