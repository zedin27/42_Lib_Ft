#include "libft.h"

void ft_striter(char *s, void (*f)(char*))
{
	int a;

	a = 0;

	while(s[a])
	{
		f(&s[a]);
		a++;
	}
}
