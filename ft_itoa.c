/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:49:48 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/09 13:49:48 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int num)
{
	size_t	len;

	len = 0;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
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

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
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
