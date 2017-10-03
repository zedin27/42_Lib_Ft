#include "libft.h"

void ft_striteri(char* s, void (*f)(unsigned int, char*))
{
	unsigned int a;
	unsigned int z;

	z = 0;
	a = ft_strlen(s);

	while(z < a)
	{
		f(z, s);
		s++;
		z++;
	}
}
