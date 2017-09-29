#include "libft.h"

int ft_strnequ(const char *s1, const char *s2, size_t n)
{

	size_t a;
	a = 0;

	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0'))
	{
		a++;
		if (a == n)
			break;
		s1++;
		s2++;
	}
	if (*s1 != *s2)
	{
		return(0);
	}

	else
		return (1);
}
