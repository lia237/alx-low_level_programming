#include <stdio.h>

/** main - print the size of the various tyoes in bytes
 * using the sizeif operator
 * Return: indicate a successful program execution by
 * returning 0
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long: %d byte(s)\n", sizeof(long int));
	printf("Size of long long: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
