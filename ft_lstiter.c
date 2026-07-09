
#include "libft.h"
#include <stdio.h>

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        if (!lst || !f)
            return ;
        f(lst->content);
        lst = lst->next;
    }
}
/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("TOILET"));
	ft_lstadd_back(&lst, ft_lstnew("EMPANADA"));
	ft_lstadd_back(&lst, ft_lstnew("PLS WORK...."));
	printf("Before ft_lstiter:\n");
	ft_lstiter(lst, print_content);
	return (0);
}*/