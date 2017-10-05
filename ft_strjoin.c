#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char* a;
	int b;
	int c;
	int d;

	b = ft_strlen(s1);
	c = ft_strlen(s2);

	a = malloc(sizeof(char) * (b + c + 1));

	if (a == NULL)
		return (NULL);
	
	d = 0;

	ft_bzero(a, (b + c + 1));

	a = ft_strcpy(a, s1);

	c = b + c;

	while(b < c)
	{
		a[b] = s2[d];
		b++;
		d++;
	}

	return (a);
}
