#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: always 0
 */
int main(void)
{
        char l;

        l = 'a';
        while (l <= 'z')
        {
                if (l != 'e' && l!= 'q')
		{
			putchar(l);
			l++;
		}
        }
        putchar('\n');
        return (0);
}
