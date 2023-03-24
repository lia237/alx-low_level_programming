#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @ap: va_list with the char to print
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - prints an integer
 * @ap: va_list with the integer to print
 */
void print_integer(va_list ap)
{
	int n;
	n = va_arg(ap, int);
	printf("%d", n);
}

/**
 * print_float - prints a float
 * @ap: va_list with the float to print
 */
void print_float(va_list ap)
{
	double d; 
	d = va_arg(ap, double);
	printf("%f", d);
}

/**
 * print_string - prints a string
 * @ap: va_list with the string to print
 */
void print_string(va_list ap)
{
	char *s;
	s = va_arg(ap, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *separator = "";
	ptype_t ptypes[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (ptypes[j].type != '\0')
		{
			if (format[i] == ptypes[j].type)
			{
				printf("%s", separator);
				ptypes[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
