#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - this function will print the number passes to it.
 * @separator: element to print as the separator.
 * @n: number of elements to print.
 * @...: arguments to print.
 *
 * Return: Nothing
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	args;
	unsigned int	i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
