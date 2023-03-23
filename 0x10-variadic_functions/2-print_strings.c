#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_strings - print given string
 * @separator: separator to print with if Null don't print any separators.
 * @n: number of arguments to print.
 * @...: string to print.
 *
 * Return: Nothing.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int	i;
	char *str;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		i++;
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
