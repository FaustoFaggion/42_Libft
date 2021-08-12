/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:33:47 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/12 17:33:47 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_elem;

	n_elem = (t_list *)malloc(sizeof(t_list));
	if (!n_elem)
		return (NULL);
	n_elem->content = content;
	n_elem->next = NULL;
	return (n_elem);
}
