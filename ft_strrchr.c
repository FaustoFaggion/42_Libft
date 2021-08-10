/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:00:20 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/07 17:00:20 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if (c == 0)
		return ((char *)s + ft_strlen(s));
	len = ft_strlen(s);
	while (len > 0)
	{
		if (*((char *)s + len) == (char)c)
			return ((char *)s + len);
		len--;
	}
	if (*((char *)s + len) != (char)c)
		return (NULL);
	return ((char *)s + len);
}
