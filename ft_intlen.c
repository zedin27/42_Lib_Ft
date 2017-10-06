#include "libft.h"

size_t ft_intlen(int n)
{
	int a;
	int b;
	a = 10;
	b = 1000000000;

	while (n <= b && b >= 10)
	{
		a--;
		b = b / 10;
	}
	
	return (a);
}

/*
** commented main is strictly for testing purposes
*/

/* int main(int argc, char* argv[]) */
/* { */

/* 	int a; */

/* 	if (argc != 2) */
/* 	{ */
/* 		write(1, "Rebecca Black <3 hehe\n", 22); */
/* 		return(0); */
/* 	} */

/* 	a = atoi(argv[1]); */

/* 	printf("%zu\n", ft_intlen(a)); */

/* 	return (26); */

/* } */
