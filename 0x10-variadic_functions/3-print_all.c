#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - print all argument that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list	args;
	const char	*p;
	char	c;
	char	*s;
	int	i;
	float	f;

	if (format == NULL)
	{
		printf("nil\n");
		return;
	}
	va_start(args, format);
	p = format;
	while (*p)
	{
		if (*p == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
			printf(", ");
		}
		else if (*p == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
			printf(", ");
		}
		else if (*p == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
			printf(", ");
		}
		else if (*p == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		p++;
	}
	va_end(args);
	printf("\n");
}
