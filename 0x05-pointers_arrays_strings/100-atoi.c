#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string to convert from
 *
 * Return: integer from conversion
 */

int	_atoi(char *s)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10)  + (s[i] - 48);
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}
	if (sign < 0)
		return (INT_MIN);
	return (result * sign);
}
