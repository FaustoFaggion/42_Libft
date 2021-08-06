#include "libft.h"

size_t	ft_ptr_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nb_ptr;
	size_t	len_ptr;
	size_t	i;

	if (!s)
		return (NULL);
	nb_ptr = ft_ptr_count(s, c);
	tab = (char **)malloc(((sizeof(char *)) * (nb_ptr)) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nb_ptr)
	{
		if (*s == c)
			s++;
		else if (*s != c)
		{
			len_ptr = 0;
			while (s[len_ptr] != c)
				len_ptr++;
			tab[i] = ft_substr(s, 0, len_ptr);
			s = s + len_ptr;
			i++;
		}
	}
	tab[(sizeof(char *) * (nb_ptr)) + 1] = '\0';
	return (tab);
}

size_t	ft_ptr_count(char const *s, char c)
{
	size_t	i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c)
		{	
			nb++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (nb);
}
