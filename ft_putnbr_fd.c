#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb;
	int		len;

	if(n == INT_MIN)
		return(ft_putstr("-2147483648"))
	if(n > INT_MIN && n <= INT_MAX)
		nb = ft_itoa(n);
	len = ft_strlen(nb);
	write (fd, nb, len);
}
