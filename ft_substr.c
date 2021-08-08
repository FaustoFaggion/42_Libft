#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if(start > ft_strlen(s))
		return (ft_strdup(""));
	if((ft_strlen(s) - start) < len)
		size = (ft_strlen(s) - start) + 1;
	else
		size = len + 1;
	substr = (char *)malloc(size * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}

	ft_strlcpy(substr, &s[start], size);
	return (substr);
}
/*
int main(void)
{
	char * str = ft_strdup("1");
	char *s = ft_substr(str, 42, 42000000);

	printf("%s", s);
	free(s);
	return(0);
}
*/