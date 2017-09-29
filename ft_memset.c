#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	char *z;
	size_t a;
	unsigned char k;

	k = c;
	a = 0;
	z = b;

	while (a != len)
	{
		z[a] = k;
		a++;
	}

	return(z);

}
