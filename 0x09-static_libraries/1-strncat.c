#include "main.h"

/**
 * _strncat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
        int     i;
        int     j;

        i = 0;
        while (dest[i])
        {
                i++;
        }
        j = 0;
        while (src[j] && j < n)
        {
                dest[i + j] = src[j];
                j++;
        }
        dest[i + j] = '\0';
        return (dest);
}
