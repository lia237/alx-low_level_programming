#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all the arguments.
 * @n: number of aguments.
 * @...: list of aguments.
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int	sum;
	unsigned int	i;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
