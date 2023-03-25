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
	char	*p;
	char	*s;

	if (format == NULL)
	{
		printf("nil\n");
		return;
	}
	va_start(args, format);
	p = (char *)format;
	while (*p)
	{
		if (*p == 'c')
			printf("%c, ", (char)va_arg(args, int));
		else if (*p == 'i')
			printf("%d, ", va_arg(args, int));
		else if (*p == 'f')
			printf("%f, ", (float)va_arg(args, double));
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
