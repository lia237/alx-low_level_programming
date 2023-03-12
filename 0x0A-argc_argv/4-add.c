#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char **argv)
{
	int	i;
	int	res;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	res = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
