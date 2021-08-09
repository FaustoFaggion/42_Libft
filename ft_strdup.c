#include "libft.h"

/*Falta entender strcpy para colocar nessa função*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*mem;
	size_t	i;

	len = ft_strlen(s);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return ((char *)mem);
}
