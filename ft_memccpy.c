#include "libft.h"

/*
**all these casts seem janky as fuck tbh
*/

void* ft_memccpy(void* dst, const void* src, int c, size_t n)
{
	
	unsigned char* s;
	unsigned char* d;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;

	while ((int)--n >= 0)
	{
		if ((*d = *s) == (unsigned char)c)
			return (dst);
		d++;
		s++;
		
	}
	return (NULL);

}
