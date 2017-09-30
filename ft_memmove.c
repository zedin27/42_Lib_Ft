#include "libft.h"



void* ft_memmove(void* dst, const void *src, size_t len)
{
	const char* a;
	char* d;

	d = (char*)dst;
	a = src;

	while ((int)len > 0)
	{
		len--;
		*d = *a;
		d++;
		a++;
	}

	return (dst);

}
