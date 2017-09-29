#include "libft.h"

void* ft_memccpy(void* dst, const void* src, int c, size_t n)
{
	while (--n >= 0)
	{
		if (( *dst++ = *src++) == (unsigned char)c)
			return (dst);
	}

	return (NULL);

}
