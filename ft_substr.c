#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t size;
	size_t i;

	size = len + 1;
	sub = (char *)malloc(size);
	i = 0;
	while(len > 0)
	{
		sub[i] = s[start + i];
		i++;
		len--;
	}
	return(sub);
}