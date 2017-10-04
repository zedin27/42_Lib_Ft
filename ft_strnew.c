#include "libft.h"

/*
**tbh not sure why its size + 1 
**maybe something to do with null terminators of strings?
*/ 

char *ft_strnew(size_t size)
{
	char* a;

	a = malloc(sizeof(char) * (size + 1));

	if (a == NULL)
		return(NULL);

	ft_bzero(a, (size + 1));

	return(a);

}
