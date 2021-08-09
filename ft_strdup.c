#include "libft.h"

/*Falta entender strcpy para colocar nessa função*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*mem;

	len = ft_strlen(s);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if(!mem)
		return(NULL);
	ft_strlcpy(mem, s, len + 1);
	return (mem);
}
