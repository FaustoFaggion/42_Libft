#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned cha	 *str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return ((void *)s);
}
