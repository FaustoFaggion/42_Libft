/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:47:07 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/09 19:47:07 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Falta entender strcpy para colocar nessa função*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*mem;

	len = ft_strlen(s);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s, len + 1);
	return (mem);
}
