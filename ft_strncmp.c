#include "libft.h"
//verificar video
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return ((int)n);
	while (i < n)
	{
		if ((str1[i] != str2[i]))
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	return (0);
}
