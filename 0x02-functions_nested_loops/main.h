#include <unistd.h>

/**
 * main - prints 
 *
 * Ruturn: sucssed wirth 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
