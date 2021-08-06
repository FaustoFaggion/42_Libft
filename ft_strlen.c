#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (0);
	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
