#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: string to print.
 * @f: fuction to use.
 *
 * Return: NOTHING
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	(*f)(name);
}
