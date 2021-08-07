#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dest);
	if (dstsize <= len)
		return (dstsize + ft_strlen(src));
	i = 0;
	if (dstsize > len)
	while ((dstsize - len) > 1 && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		dstsize--;
	}
	dest[len + i] = '\0';
	return (len + ft_strlen(src));
}

int main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	memset(dest, 'C', 15);

	printf("%ld", (size_t )ft_strlcat(dest, src, 17));
	printf(" -> %s\n", dest);
}