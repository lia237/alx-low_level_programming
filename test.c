#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - Printf function copy
 * Description: This is a modified version of printf
 * @format: String to print
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list	args;
	int	printed_chars;
	int	i;
	int	arg;

	printed_chars = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				arg = va_arg(args, int);
				printed_chars += printf("%d", arg);
			}
			else if (format[i] == 'c')
			{
				printed_chars += printf("%c", va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				printed_chars += printf("%s", va_arg(args, char *));
			}
			else if (format[i] == '%')
			{
				printed_chars += printf("%%");
			}
			else
			{

			}
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(args);
	return printed_chars;
}
