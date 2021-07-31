#include "libft.h"

char	*ft_strdup(const char *s)
{	//Falta entender strcpy para colocar nessa função
	size_t	len;
	char	*mem;
	size_t	i;

	len = ft_strlen(s) + 1;
	mem = (char *)malloc(len);
	i = 0;
	while(s[i] != '\0')
	{
		mem[i] = s[i];
		i++;
	}
	return((char *)mem);
}