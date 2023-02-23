#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int	i;
	char	fi[] = "Fizz";
	char	bu[] = "Buzz";
	char	fb[] = "FizzBuzz";

	i = 1;
	while (i <= 100)
	{
		if (i == 100)
		{
			printf("%s", bu);
		}
		else if (i % 15 == 0)
		{
			printf("%s ", fb);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fi);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", bu);
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
