#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *)&haystack[0]);
	}
	i = 0;
	while (haystack[i] != '\0' && i < (n - ft_strlen(needle)))
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	printf("%s", ft_strnstr(haystack, "cd", 8));
	return(0);
}
*/