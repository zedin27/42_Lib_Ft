#include "libft.h"

/*
**idk why, but this solved all my problems. 
**something about pointer arithmetic with a local variable I guess
*/

char* ft_strcat(char* s1, const char* s2)
{

	char* a;
	a = s1;

	while (*a != '\0')
		a++;

	while ((*a++ = *s2++))
		;

	return (s1);
}


