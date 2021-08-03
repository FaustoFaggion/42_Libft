#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if(!s)
		return(NULL);
	size = len + 1;
	substr = (char *)malloc(size * sizeof(char));
	if(!substr)
		return(NULL);
	ft_strlcpy(substr, &s[start], size);
	return(substr);
}