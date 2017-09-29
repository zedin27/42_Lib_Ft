#include "libft.h"

int ft_atoi(const char* str)
{
	int result;
	int bool;

	bool = 1;
	result = 0;

	while (*str == ' ')
		str++;

	if (*str == '-')
	{
		str++;
		bool = -1;
	}

	while(*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10;
			result = result + (*str - '0');
			str++;
		}
		else
			break;
	}
	result = (result * bool);
	return (result);
}

