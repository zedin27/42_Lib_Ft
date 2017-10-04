#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

	unsigned int a;
	unsigned int z;
	char *c;

	z = 0;
	a = ft_strlen(s);
	c = malloc(sizeof(char) * (a + 1));

	if(c == NULL)
		return(NULL);

	ft_bzero(c, (a + 1));

	while(z < a)
	{
		c[z] = f(z, s[z]);
		z++;
	}

	return (c);

}
