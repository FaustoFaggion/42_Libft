#include "libft.h"

void	ft_putnbr_fd(int n, int fd)101 10 1 
{

	if(n == INT_MIN)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0)
		ft_putchr('-', fd);
		n = -n;
	if (n < 10)
		ft_putchr(n + '0', fd);	
		break;
	if(n >= 10 && n <= INT_MAX)
		ft_putnbr_fd(n / 10, fd);
	ft_putnbr_fd(n % 10, fd);
}
