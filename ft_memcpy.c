#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *s;
	unsigned char *d;

	if(src == NULL || dest == NULL)
		return(NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while(n > 0)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return(dest);
}