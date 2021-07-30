#include "libft.h"


void    ft_bzero(void *s, size_t n)
{
	while(n > 0)
    {
		*((char *)s) = 0; // use char to modify byte by bytes.
        s++;
        n--;
    }
}