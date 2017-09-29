#include "libft.h"

void ft_strclr(char *s)
{
	char* a;
	a = s;
	while (*a != '\0')
	{
		*a = '\0';
		a++;
	}
}
