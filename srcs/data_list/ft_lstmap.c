#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		(f)(lst->content);
		ft_lstadd_back(&new_list, ft_lstnew(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
