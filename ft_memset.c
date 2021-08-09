/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:46:27 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/09 19:46:27 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	 *str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return ((void *)s);
}
