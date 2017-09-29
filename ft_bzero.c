#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *z;

	size_t a;

	z = s;

	a = 0;

	while (a != n)
	{
		z[a] = '\0';
		a++;
	}
}
