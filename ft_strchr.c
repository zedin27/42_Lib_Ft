#include "libft.h"

char* ft_strchr(const char *s, int c)
{
	size_t a;
	size_t b;
	char* z;

	a = ft_strlen(s);
	b = 0;
	z = (char*)s;

	while(b < a)
	{
		if (*z == (char)c)
			return(z);
		z++;
		b++;
	}
	return(NULL);
}
