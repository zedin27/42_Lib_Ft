#include "libft.h"

int	ft_delimitcount(char *str, int a)
{
	int n;
	n = 0;

	while (*str)
	{
		if (*str != (char)a)
			n++;
		while (*str != (char)a)
		{
			str++;
			if (!*str)
				return (n);
		}
		str++;
	}
	return (n);
}

/* int main (int argc, char* argv[]) */
/* { */
/* 	if (argc != 2) */
/* 	{ */
/* 		printf("Pterodactyls pulled Santa's sled during the Cretaceous\n"); */
/* 		return (0); */
/* 	} */


/* 	printf("%d\n", ft_delimitcount(argv[1], ' ')); */
	
/* 	return (26); */
/* } */
