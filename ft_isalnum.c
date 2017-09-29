#include "libft.h"

int ft_isalnum(int c)
{
	int a;
	int d;

	a = ft_isalpha(c);
	d = ft_isdigit(c);

	if (a == 1 || d == 1)
		return (1);
	else
		return(0);
}
