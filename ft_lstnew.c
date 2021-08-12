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
