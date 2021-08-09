#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{

	if(n == INT_MIN)
	{	
		ft_putstr_fd("-2147483648", fd);
		return;
	}
	if (n < 0)
	{
		ft_putchr_fd('-', fd);
		n = -n;
	}
	if (n < 10)
		ft_putchr_fd(n + '0', fd);	
		return;
	if(n >= 10 && n <= INT_MAX)
		ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
}
