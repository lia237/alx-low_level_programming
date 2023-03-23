#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print given string
 * @separator: separator to print with if Null don't print any separators.
 * @n: number of arguments to print.
 * @...: string to print.
 *
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list	args;
	unsigned int	i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
