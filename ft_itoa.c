#include "libft.h"

static size_t	ft_numlen(int num)
{
	size_t	len;

	len = 1;
	if (num < 0)
		len++;
	num = num / 10;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	n_digits;
	char	*str;

	n_digits = ft_numlen(n);
	str = (char *)malloc((n_digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	str[n_digits] = '\0';
	while (n_digits)
	{
		str[n_digits - 1] = (n % 10) + '0';
		n = n / 10;
		n_digits--;
	}
	return (str);
}
