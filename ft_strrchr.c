#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = len;
	while (i > 0)
	{
		if (*((char *)s + i) == (char)c)
			return ((char *)s + i);
		i--;
	}
	return ((char *)s + len);
}
