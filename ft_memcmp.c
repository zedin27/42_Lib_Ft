#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t a;
	a = 0;

	unsigned char* z1;
	unsigned char* z2;

	z1 = (unsigned char*)s1;
	z2 = (unsigned char*)s2;

	while (*z1 == *z2)
	{
		a++;
		if (a == n)
			break;
		z1++;
		z2++;
	}

	if (*z1 != *z2)
		return(*z1 - *z2);
	else
		return (0);

}
