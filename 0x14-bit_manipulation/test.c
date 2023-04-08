#include <stdio.h>

void print_binary(unsigned long int n)
{
    int i;
    unsigned long int mask;

    // Find the most significant bit in the number.
    mask = 1;
    for (i = 63; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            break;
        }
        mask <<= 1;
    }

    // Print the binary representation of the number.
    while (mask)
    {
        if (n & mask)
        {
            putchar('1');
        }
        else
        {
            putchar('0');
        }
        mask >>= 1;
    }
}
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
