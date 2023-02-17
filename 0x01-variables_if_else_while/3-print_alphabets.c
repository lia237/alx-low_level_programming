#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0
 */

int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
