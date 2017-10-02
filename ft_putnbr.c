#include "libft.h"

void ft_putnbr(int n)
{
	
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
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
