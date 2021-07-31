#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if(c > 127)
		c %= 256;
	while(*(unsigned char *)s != '\0')
	{
		if(*(char *)s == (char)c)
			return((char *)s);
		s++;
	}
	if(*(char *)s == (char)c) //check c = '\0'
		return((char *)s);
	return(NULL); //Verificar sintaxe
}