#include "libft.h"

/*
**the if statement in the second while loop is sketchy
**might want to revist it
*/

char* ft_strncat(char* s1, const char* s2, size_t n)
{

	char* a;
	size_t b;
	a = s1;
	b = 0;

	while (*a != '\0')
		a++;

	while((*a++ = *s2++))
	{
		if (b >= (n - 1))
			break;
		b++;
	}

	return (s1);
}
