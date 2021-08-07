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
#include <stdio.h>


char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	
	if(!s || !c)
		return(NULL);
	len = ft_strlen(s);
	while (len > 0)
	{
		if (*((char *)s + len) == (char)c)
			return ((char *)s + len);
		len--;
	}
	if (len == 0 && *((char *)s + len) != (char)c )
		return(NULL);
	return ((char *)s + len);
}
