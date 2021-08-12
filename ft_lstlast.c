/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fagiusep <faustofaggion@hotmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:33:38 by fagiusep          #+#    #+#             */
/*   Updated: 2021/08/12 17:33:38 by fagiusep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

//int main(void)
//{
//	t_list * l =  NULL;
	
	//ft_lstlast(l);
	//ft_lstadd_back(&l, ft_lstnew((void*)1));
	
	
	//ft_lstlast(l)->content == (void*)1;
	//ft_lstadd_back(&l, ft_lstnew((void*)2));
	
	//ft_lstlast(l)->content == (void*)2;
	
	//ft_lstlast(l)->next == 0;
	//freeList(l); showLeaks();
	//write(1, "\n", 1);
	
	//return (0);
//}