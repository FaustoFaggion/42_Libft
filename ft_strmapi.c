#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	size;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	str = (char *)s;
	size = ft_strlen(str);
	str = (char *)malloc((sizeof(char) * (size + 1)));
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
