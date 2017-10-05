#include "libft.h"

char *ft_strdup(const char *s1)
{
	int a;
	char *b;
	a = ft_strlen(s1);
	b = malloc(sizeof(char) * (a + 1));

	if (b == NULL)
		return (NULL);

	b = ft_strcpy(b, s1);
	
	return(b);

}
