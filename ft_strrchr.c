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
	
	len = ft_strlen(s);
	while (len > 0)
	{
		if (*((char *)s + len) == (char)c)
			return ((char *)s + len);
		len--;
	}
	return ((char *)s + len);
}
/*
int main(void)
{
	char	str[] = "tripouille";

	printf("%s", ft_strrchr(str, 't'));
	return(0);
}
*/