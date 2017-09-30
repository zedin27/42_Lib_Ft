#include "libft.h"

void* ft_memcpy(void* dst, const void* src, size_t n)
{
	const char* a;
	char* b;

	a = src;
	b = dst;

	while (n > 0)
	{
		n--;
		*b = *a;
		b++;
		a++;
	}

	return (dst);
}
