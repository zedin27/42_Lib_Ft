#include "libft.h"

/*
** passes Alelievr without the free(new)
** passes Alelievr without void cast in ft_memcpy
*/

t_list *ft_lstnew(void const *content, size_t content_size)
{

		t_list *fresh;

		fresh = (t_list *)malloc(sizeof(t_list));
		if (fresh == NULL)
			return (NULL);
		if (content == NULL)
		{
			fresh->content = NULL;
			fresh->content_size = 0;
		}
		else
		{
			fresh->content = malloc(content_size);
			if (fresh->content == NULL)
			{
				free(fresh);
				return (NULL);
			}
			ft_memcpy(fresh->content, (void*)content, content_size);
			fresh->content_size = content_size;
		}
		fresh->next = NULL;
		return (fresh);

} 

/* int main(void) */
/* { */
/* 	t_list a; */

/* 	a = *ft_lstnew(" ", 0); */

/* 	return (26); */
/* } */

/* Prototype t_list * ft_lstnew(void const *content, size_t */
/* 							 content_size); */

/* Description Allocates (with malloc(3)) and returns a “fresh” link. The */
/* variables content and content_size of the new link are initialized */
/* by copy of the parameters of the function. If the parameter */
/* 	content is nul, the variable content is initialized to */
/* NULL and the variable content_size is initialized to 0 even */
/* if the parameter content_size isn’t. The variable next is */
/* 	initialized to NULL. If the allocation fails, the function returns */
/* NULL. */

/* Param. #1 The content to put in the new link. */
/* Param. #2 The size of the content of the new link. */
/* Return value The new link. */
/* 	Libc functions malloc(3), free(3) */
