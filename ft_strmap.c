#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	int a;
	int b;
	char *c;
	a = 0;
	b = ft_strlen(s);
	c = malloc(sizeof(char) * (b + 1));
	
	if (c == NULL)
		return(NULL);
	
	ft_bzero(c, (b + 1));

	while(s[a])
	{
		c[a] = f(s[a]);
		a++;
	}

	return (c);
}
