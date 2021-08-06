#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	tot_size;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	tot_size = (len_s1 + len_s2 + 1);
	new = (char *)malloc(tot_size * sizeof(char));
	ft_strlcpy(new, s1, (len_s1 + 1));
	ft_strlcpy(&new[len_s1], s2, (len_s2 + 1));
	return (new);
}