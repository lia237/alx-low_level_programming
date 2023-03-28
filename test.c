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
 * _pprintf - Printf function copy
 * Description: This is a modified version of printf
 * @format: String to print
 * Return: Number of characters printed
 */

int _pprintf(const char *format, ...)
{
	va_list args;
	int printed_chars;
	char	*s;
	char	c;
	int	j;
	int i ;

	printed_chars = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				printed_chars++;
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				j = 0;
				while (s[j])
				{
					_putchar(s[j]);
					j++;
					printed_chars++;
				}
				printed_chars++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				printed_chars++;
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
int main(void)
{
    _pprintf("%c\n", 'A');
    _pprintf("%s\n", "Hello, world!");
    _pprintf("%%\n");
    _pprintf("%\n");
    return (0);
}
