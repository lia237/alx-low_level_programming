#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	int	j;

	res = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0:
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
