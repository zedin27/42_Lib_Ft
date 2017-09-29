#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
	char* a;
	a = (char*)s;

	while(*a != '\0')
	{
		ft_putchar_fd(*a, fd);
		a++;
	}
}
