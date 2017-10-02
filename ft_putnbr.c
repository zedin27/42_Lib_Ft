#include "libft.h"

void ft_putnbr(int n)
{
	
	if (n > 2147483647 || n < -2147483647)
	{
		write(1, "error: exceeds max signed int value", 35);
		return;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = (n * -1);
	}
	if (n > 9)
	{
		ft_putnbr(n/10);
	}
	n = (n % 10) + '0';
	write(1, &n, 1);
}

/* void ft_putnbr(int n) */
/* { */
/* 	int a; */

/* 	if (n > 2147483647 || n < -2147483647) */
/* 	{ */
/* 		write(1, "error: exceeds max signed int value", 35); */
/* 		return; */
/* 	} */
/* 	if (n < 0) */
/* 	{ */
/* 		ft_putchar('-'); */
/* 		n = (n * -1); */
/* 	} */
/* 	if (n > 9) */
/* 	{ */
/* 		ft_putnbr(n/10); */
/* 	} */
/* 	a = (n % 10) + '0'; */
/* 	write(1, &a, 1); */
/* } */
