#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *s;
	unsigned char *d;
	int i;

	if(src == NULL || dest == NULL)
		return(NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = n ;
	if(d > s)
	{
		while(i > 0)
		{
			d[i -1] = s[i -1];
			i--;
		}
		return(dest);
	}
	ft_memcpy(d, s, n);
	return(dest);
}