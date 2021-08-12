#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*prev;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
		if (prev->content)
			del(prev->content);
		free(prev);
	}
	*lst = NULL;
}

/*
void	del(void * c)
{
	c= "ab";
}


int main(void)
{
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*ptr;
	void	*del;

	elem1 = malloc(sizeof(t_list));
	elem2 = malloc(sizeof(t_list));
	elem3 = malloc(sizeof(t_list));

	elem1->content = "palavra1";
	elem2->content = "palavra2";
	elem3->content = "palavra3";

	ptr = elem1;
	elem1->next = elem2;
	elem2->next = elem3;

	del = del(void *);
	ft_lstclear(&ptr, del);

	return (0);
}
*/