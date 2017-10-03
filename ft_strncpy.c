#include "libft.h"

/*
** the ( len - 1 ) is crucial in both places
*/

char* ft_strncpy(char* dst, const char* src, size_t len)
{
	char* save;
	size_t a;
	size_t b;
	
	b = ft_strlen(src);
	a = 0;
	save = dst;


    while (((*save++ = *src++) && a < (len - 1) ))
		a++;

	while (b++ < (len - 1))
		*save++ = '\0';

    return (dst);
}


