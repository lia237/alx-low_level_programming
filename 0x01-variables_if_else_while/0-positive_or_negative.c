#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - the main function is the entry point of the program
 *
 * Return: the return statement is used to indicate that
 * the program has completed successfully
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
