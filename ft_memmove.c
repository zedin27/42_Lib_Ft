#include "libft.h"

/*
** I have no idea how that if statement works
** I just searched slack and found it
*/

void* ft_memmove(void* dst, const void *src, size_t len)
{
	int e;
	const char* a;
	char* d;

	d = (char*)dst;
	a = (char*)src;
	e = 0;

	if (dst < src) 
		while (e < (int)len)
		{
			d[e] = a[e];
			e++;
		}
	
	else
	while ((int)len > 0)
	{
		len--;
		d[len] = a[len];
	}

	return (dst);

}

