#include "libft.h"

char* ft_strrchr(const char *s, int c)
{
	size_t a;
	size_t b;
	char* z;
	char* y;
	int bool;

	bool = 0;

	a = ft_strlen(s);
	b = 0;
	z = (char*)s;

	while(b < a)
	{
		z++;
		if (*z == (char)c)
		{
			bool = 1;
			y = z;
		}
		b++;
	}
	if (bool == 1)
		return(y);
	return(NULL);
}
