#include "libft.h"

// variable "i" will be the size of the smaller value, *s length or n.
static size_t    ft_strnlen(const char *s, size_t n)
{
    size_t	i;

    i = 0;
    while (s[i] && i < n)
        i++;
    return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{	
	size_t	i;
	size_t	len;

	len = ft_strnlen(dest, dstsize);
	/*
	len = 0;
	while(dest[len] != '\0' && len < dstsize) //verifica se n é menor que dest
		len++;
	*/
	if(len == dstsize)
		return(len + ft_strlen(src));
	i = 0;
	while(dstsize > 1 && src[i] != '\0')
	{	
		dest[len + i] = src[i];
		i++;
		dstsize--;
	}
	dest[len + i] = '\0';
	return(len + ft_strlen(src));
}