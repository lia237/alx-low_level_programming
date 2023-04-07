#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b:string from 0 and 1 else NULL
 *
 * Return:unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int	i;
	unsigned int	res;

	res = 0;
	if (b == NULL)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] == '0' || b[i] == '1')
		{
			res = res << 1;
			res = res + b[i] - '0';
		}
		else
			return (0);
		i++;
	}
	return (res);
}
