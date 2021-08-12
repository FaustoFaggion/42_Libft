#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*swap;

	swap = *lst;
	*lst = new;
	new->next = swap;
}
