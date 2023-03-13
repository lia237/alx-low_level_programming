#include "main.h"

/**
 * _puts - void _puts(char *str);
 * @str: one char type argument
 *
 * Return: none
 */

void _puts(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }
        _putchar('\n');
}
