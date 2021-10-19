#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cell;

	cell = (t_list *)malloc(sizeof(t_list));
	if (!cell)
		return (NULL);
	cell->content = content;
	cell->next = NULL;
	return (cell);
}
