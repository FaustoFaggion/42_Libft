#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char			*str;
	unsigned int	size;
	unsigned int	i;

	if (!str || !f)
	{
		str = (char *)s;
		size = ft_strlen(str);
		str = (char *)malloc((sizeof(char) * (size + 1)));
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
