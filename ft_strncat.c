#include "libft.h"

char* ft_strncat(char* s1, const char* s2, size_t n)
{

	while (*s1 != '\0')
		s1++;

	if (*s1 == '\0')
	{
		s1 = ft_strncpy(s1, s2, n);
	}

	return (s1);
}
