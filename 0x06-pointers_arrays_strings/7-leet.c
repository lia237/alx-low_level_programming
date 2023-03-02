#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @s: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *s)
{
	int	i;
	int	j;
	char	*in = "aAeEoOtTlL";
	char	*out = "4433007711";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (in[i])
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
			}
			j++;
		}
		i++;
	}
}
