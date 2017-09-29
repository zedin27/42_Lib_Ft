#include "libft.h"

void* ft_memchr(const void *s, int c, size_t n)
{
	char* z;
	size_t a;

	a = 0;
	z = (char*)s;

	while(a < n)
	{
		if (*z == (char)c)
			return(z);
		z++;
		a++;
	}
	return(NULL);
}
