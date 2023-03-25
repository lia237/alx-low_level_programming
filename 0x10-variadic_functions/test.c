#include <stddef.h>
#include "variadic_functions.h"

/**
 * check_arg - check format.
 * @argp: arguments list.
 * @c: argument to check.
 * Return: Nothing.
 */

void check_arg(va_list argp, char c)
{
	char	*s;

	if (c == 'c')
		printf("%c", va_arg(argp, int));
	else if (c == 'd')
		printf("%d", va_arg(argp, int));
	else if (c == 's')
	{
		s = va_arg(argp, char *);
		if(s == NULL)
			printf("nil");
		else
			printf("%s", s);
	}
	else if (c == 'f')
		printf("%f", va_arg(argp, double));
	else
		return;
}

/**
 * print_all - print all argument that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int	i;
	char	*s;

	va_list argp;
	if (format == NULL)
	{
		printf("nil\n");
		return;
	}
	printf("format string: %s\n", format);
	va_start(argp, format);
	s = (char *)format;
	i = 0;
	printf("+++");
	while (s[i])
	{
		check_arg(argp, s[i]);
		i++;
	}
	va_end(argp);
	printf("\n");
}
