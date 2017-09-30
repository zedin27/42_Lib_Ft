#include "libft.h"

/*
**tbh not sure about using size as second arg of ft_bzero
*/

void* ft_memalloc(size_t size)
{

	void* fresh;

	fresh = malloc(size);

	if (fresh == NULL)
		return (NULL);

	ft_bzero(fresh, size);
	return (fresh);

}
