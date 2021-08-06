#include "libft.h"
#include <stdio.h>

size_t	ft_ptr_count(char const *s, char c);

char	**ft_split(char const *s, char c) //"Agora vai dar certo", " "
{
	char	**tab;
	size_t	nb_ptr;
	if (!s)
		return (NULL);
	nb_ptr = ft_ptr_count(s, c);
	tab = (char **)malloc((sizeof(char *)) * (2));


		
	return(tab);
}

size_t	ft_ptr_count(char const *s, char c)
{
	
}