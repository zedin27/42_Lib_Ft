#include "libft.h"

char* ft_strcat(char* s1, const char* s2)
{

	while (*s1 != '\0')
		s1++;

	if (*s1 == '\0')
	{
		s1 = ft_strcpy(s1, s2);
	}

	return (s1);
}
