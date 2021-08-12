/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:33:42 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/12 17:33:42 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmp = ft_lstnew(lst->content);
		if (!tmp)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		tmp->content = f(tmp->content);
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (newlst);
}
