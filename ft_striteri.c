#include "libft.h"

void ft_striteri(char* s, void (*f)(unsigned int, char*))
{
	unsigned int a;
	unsigned int z;

	z = 0;
	a = strlen(s);

	while(z < a)
	{
		f(a, s);
		s++;
		z++;
	}

}
