#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*pos;
	size_t	tot_size;

	tot_size = nmemb * size;
	pos = malloc(tot_size);
	if (!pos || (tot_size > INT_MAX))
		return (NULL);
	ft_bzero(pos, tot_size);
	return ((void *)pos);
}
