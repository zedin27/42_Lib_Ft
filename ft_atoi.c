#include "libft.h"

int ft_atoi(const char* str)
{
	long result;
	int bool;

	bool = 1;
	result = 0;

	while (*str != '\0')
	{
		while(ft_isspace((int)*str) == 1)
			str++;
		if (*str == '-')
		{
			str++;
			bool = -1;
		}

		while (*str >= '0' && *str <= '9')
		{
			result = result * 10;
			result = result + (*str - '0');
			str++;
		}
		if (*str < '0' || *str > '9')
			break;
		str++;
	}

	if (result == -2147483648)
		return(-1);
	if (result < -2147483649)
		return bool == 1 ? -1 : 0;

	result = (result * bool);
	return (result);
}

/* 	while (*str == ' ') */
/* 	while (*str != '-' && *str > '9' && *str < '0') */
/* 		str++; */

