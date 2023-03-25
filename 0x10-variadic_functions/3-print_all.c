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

	va_start(args, format);
	p = (char *)format;
	while (*p)
	{
		switch (*p)
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;
			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			case 'f':
				printf("%f, ", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				if (s != NULL)
					printf("%s", s);
				break;
			default:
				break;
		}
		p++;
	}
	va_end(args);
	printf("\n");
}
