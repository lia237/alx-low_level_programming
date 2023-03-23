#include <stdarg.h>

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

	if (n = 0)
		return (0);
sh: 1: q: not found
	va_list args;
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
