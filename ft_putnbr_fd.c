#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int a;

	if (n > 2147483647 || n < -2147483647)
	{
		write(2, "error: exceeds max signed int value", 35);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = (n * -1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n/10, fd);
	}
	a = (n % 10) + '0';
	write(fd, &a, 1);
}
