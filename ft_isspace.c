#include "libft.h"

int ft_isspace(int a)
{
	if (a == ' ' || 
			a == '\t' || 
			a == '\n' ||
			a == '\v' ||
			a == '\f' ||
			a == '\r')
		return (1);
	else
		return (0);
}
