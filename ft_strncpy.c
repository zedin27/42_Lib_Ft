#include "libft.h"

char* ft_strncpy(char* dst, const char* src, size_t len)
{

	size_t a;
	a = 0;

    while (((*dst++ = *src++) && a < (len - 1) ))
		a++;

    return (dst);
}
