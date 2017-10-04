#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *a;
	int b;
	
	b = 0;

	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);

	ft_bzero(a, (len + 1));

	while (len > 0)
	{
		a[b] = s[start];
		len--;
		start++;
		b++;
	}
	return(a);

}
