#include "libft.h"

void* ft_memalloc(size_t size)
{

	void* fresh;

	fresh = malloc(size);

	if (fresh == NULL)
		return (NULL);

	ft_bzero(fresh, n);
	return (fresh);

}
