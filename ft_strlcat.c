/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:47:34 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/09 19:47:34 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dest);
	if (dstsize <= len)
		return (dstsize + ft_strlen(src));
	i = 0;
	else if (dstsize > len)
	{
		while ((dstsize - len) > 1 && src[i] != '\0')
		{
			dest[len + i] = src[i];
			i++;
			dstsize--;
		}
		dest[len + i] = '\0';
	}
	return (len + ft_strlen(src));
}
