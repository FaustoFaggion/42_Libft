#include "libft.h"

char	*ft_strlcat(char *dest, const char *src, size_t n)
{	//se eu concateno a partir do byte nulo de dest, como dest pode ter espaço suficiente?
	size_t	i;
	size_t	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return(dest);
}